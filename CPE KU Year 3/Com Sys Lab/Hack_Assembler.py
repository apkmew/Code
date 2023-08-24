def assemble( commands ):

    # Comp table
    comp_table = {
        '0'   : '0101010',
        '1'   : '0111111',
        '-1'  : '0111010',
        'D'   : '0001100',
        'A'   : '0110000',
        '!D'  : '0001101',
        '!A'  : '0110001',
        '-D'  : '0001111',
        '-A'  : '0110011',
        'D+1' : '0011111',
        'A+1' : '0110111',
        'D-1' : '0001110',
        'A-1' : '0110010',
        'D+A' : '0000010',
        'D-A' : '0010011',
        'A-D' : '0000111',
        'D&A' : '0000000',
        'D|A' : '0010101',
        'M'   : '1110000',
        '!M'  : '1110001',
        '-M'  : '1110011',
        'M+1' : '1110111',
        'M-1' : '1110010',
        'D+M' : '1000010',
        'D-M' : '1010011',
        'M-D' : '1000111',
        'D&M' : '1000000',
        'D|M' : '1010101'
    }

    # Dest table
    dest_table = {
        ''    : '000',
        'M'   : '001',
        'D'   : '010',
        'MD'  : '011',
        'A'   : '100',
        'AM'  : '101',
        'AD'  : '110',
        'AMD' : '111'
    }

    # Jump table
    jump_table = {
        ''    : '000',
        'JGT' : '001',
        'JEQ' : '010',
        'JGE' : '011',
        'JLT' : '100',
        'JNE' : '101',
        'JLE' : '110',
        'JMP' : '111'
    }

    # Comp function
    def comp( command ):
        if ';' in command:
            return comp_table[command.split(';')[0]]
        else:
            return comp_table[command.split('=')[1]]
    
    # Dest function
    def dest( command ):
        if '=' in command:
            return dest_table[command.split('=')[0]]
        else:
            return dest_table['']
    
    # Jump function
    def jump( command ):
        if ';' in command:
            return jump_table[command.split(';')[1]]
        else:
            return jump_table['']

    # First pass: build symbol table
    symbol_table = {}
    for i in range( 16 ):
        symbol_table['R' + str( i )] = i
    symbol_table['SCREEN'] = 16384
    symbol_table['KBD'] = 24576
    symbol_table['SP'] = 0
    symbol_table['LCL'] = 1
    symbol_table['ARG'] = 2
    symbol_table['THIS'] = 3
    symbol_table['THAT'] = 4
    rom_address = 0

    # Remove comments and whitespace
    commands = commands.split('\n')
    commands = [command.strip() for command in commands]
    commands = [command for command in commands if command != '']
    commands = [command for command in commands if command[0] != '/']
    commands = [command.split('//')[0] for command in commands]
    commands = [command for command in commands if command != '']

    for command in commands:
        if command[0] == '(':
            symbol_table[command[1:-1]] = rom_address
        else:
            rom_address += 1
    
    # Second pass: translate commands
    ram_address = 16
    rom_address = 0
    binary = []
    commands = [command for command in commands if command[0] != '(']
    for command in commands:
        if command[0] == '@':
            symbol = command[1:]
            if symbol.isdigit():
                binary.append( '0' + format( int( symbol ), '015b' ) )
            else:
                if symbol not in symbol_table:
                    symbol_table[symbol] = ram_address
                    ram_address += 1
                binary.append( '0' + format( symbol_table[symbol], '015b' ) )
            rom_address += 1
        else:
            binary.append( '111' + comp( command ) + dest( command ) + jump( command ) )
            rom_address += 1
        
    #   convert binary to decimal
    decimal = []
    for i in range( len( binary ) ):
        decimal.append( int( binary[i], 2 ) )

    return decimal
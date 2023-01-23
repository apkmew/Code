fibo:
    addi x2,x2,-24
    sd x29,16(x2)
    sd x1,8(x2)
    sd x10,0(x2)
    addi x28,x0,1
    blt x10,x28,L1
    addi x28,x10,-1
    beq x28,x0,L2
    jal x1,L3
    jalr x0,0(x1)

L1:
    addi x11,x0,0
    addi x2,x2,24
    jalr x0,0(x1)

L2:
    addi x11,x0,1
    addi x2,x2,24
    jalr x0,0(x1)

L3:
    addi x10,x10,-1
    jal x1,fibo
    addi x29,x11,0
    addi x10,x10,-1
    jal x1,fibo
    addi x30,x11,0
    ld x10,0(x2)
    ld x1,8(x2)
    add x11,x30,x29
    ld x29,16(x2)
    addi x2,x2,24
    beq x1,x0,L4
    jalr x0,0(x1)

L4:
    exit
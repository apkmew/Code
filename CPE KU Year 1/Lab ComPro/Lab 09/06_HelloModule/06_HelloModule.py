code = '''
def greeting(name) :
    print(f'Hello, {name}')'''

with open('mymodule.py','w') as fp :
    fp.write(code)

import mymodule
name = input('Name : ')
mymodule.greeting(name)
from typing import Sized


def draw(m) :
    for i in range(len(m)) :
        print(str(m[i])*(i+1))

while True :
    a = [str(x) for x in input().split()]
    if a == ['0'] : break
    draw(a)
print('Good Bye.')
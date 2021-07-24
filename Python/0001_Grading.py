a = int(input())
b = int(input())
c = int(input())
a = a + b + c
if a>=80 :
    print('A')
elif a>=75 :
    print('B+')
elif a>=70 :
    print('B')
elif a>=65 :
    print('C+')
elif a>=60 :
    print('C')
elif a>=55 :
    print('D+')
elif a>=50 :
    print('D')
else:
    print('F')
n = int(input())
print('1000 =>',n//1000)
n -= n // 1000 * 1000
print('500 =>',n//500)
n -= n // 500 * 500
print('100 =>',n//100)
n -= n // 100 * 100
print('50 =>',n//50)
n -= n // 50 * 50
print('20 =>',n//20)
n -= n // 20 * 20
print('10 =>',n//10)
n -= n // 10 * 10
print('5 =>',n//5)
n -= n // 5 * 5
print('1 =>',n//1)
n -= n // 1 * 1    
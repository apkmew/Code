month = [0,31,28,31,30,31,30,31,31,30,31,30,31]
d = int(input('d: '))
m = int(input('m: '))
y = int(input('y: '))
if y%400==0 or y%4==0 and y%100!=0 : month[2] += 1
for i in range(2,13) : month[i] += month[i-1]
print(d + month[m-1])
l = [0,31,28,31,30,31,30,31,31,30,31,30,31]
d = int(input('d: '))
m = int(input('m: '))
y = int(input('y: '))
if y%400 == 0 : l[2] += 1
elif y%100 == 0 : l[2] += 0
elif y%4 == 0 : l[2] += 1
for i in range(1,13) :
    l[i] += l[i-1]
print(d+l[m-1])
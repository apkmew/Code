r = int(input('R: '))
c = int(input('C: '))
total = 0
for i in range(1,min(r,c)+1) :
    x = c - i + 1
    y = r - i + 1
    total += x*y
print(total)
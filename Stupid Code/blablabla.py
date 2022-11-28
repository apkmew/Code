n = int(input())
ch = []
temp = {}
for k in range(n):
    i = 0
    while True :
        if i not in ch and set(str(i)).intersection(temp) == set():
            print(i,end=' ')
            ch.append(i)
            temp = set(str(i))
            break
        i += 1
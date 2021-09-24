ans,mp = [],{}
n = int(input('N : '))
while n : 
    n -= 1
    name,weight = input().split()
    weight = int(weight)
    mp[name] = weight
x = int(input('XX : '))

def combi(total) :
    if total == x :
        print(' '.join(ans))
        exit(0)
    for i in mp : 
        if i not in ans :
            ans.append(i)
            combi(total+mp[i])
            ans.remove(i)

combi(0)
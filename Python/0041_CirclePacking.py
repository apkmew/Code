n = int(input())
if n%2==1 and n!=1 and n!=3 : print("{:.6f}".format((n-1)+1.464102))
elif n==1 : print("{:.6f}".format(2))
elif n==3 : print("{:.6f}".format(3+1.464102/2))
else : print("{:.6f}".format(n))
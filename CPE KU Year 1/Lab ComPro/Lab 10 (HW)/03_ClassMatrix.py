class Matrix :
    def __init__(self,a) :
        self.a = a

    def det(self) :
       ans = 0
       ans += self.a[0][0]*self.a[1][1]*self.a[2][2] + self.a[0][1]*self.a[1][2]*self.a[2][0] + self.a[0][2]*self.a[1][0]*self.a[2][1]
       ans -= self.a[2][0]*self.a[1][1]*self.a[0][2] + self.a[2][1]*self.a[1][2]*self.a[0][0] + self.a[2][2]*self.a[1][0]*self.a[0][1]
       return ans 

    def plus(self,other) :
        ans = []
        for i in range(3) :
            aa = []
            for j in range(3) :
                aa.append(self.a[i][j]+other.a[i][j])
            ans.append(aa)
        return Matrix(ans)

    def minus(self,other) :
        ans = []
        for i in range(3) :
            aa = []
            for j in range(3) :
                aa.append(self.a[i][j]-other.a[i][j])
            ans.append(aa)
        return Matrix(ans)

    def multiply(self,other) :
        ans = []
        for i in range(3) :
            aa = []
            for j in range(3) :
                x = 0
                for k in range(3) :
                    x += self.a[i][k] * other.a[k][j]
                aa.append(x)
            ans.append(aa)
        return Matrix(ans)

    def show(self) :
        for i in range(3) :
            for j in range(3) :
                print(f'{self.a[i][j]:^6}', end = ' ')
            print()

def input_matrix():
    data = []
    for i in range(3):
        data.append([int(j) for j in input(f"Row {i+1} : ").split(' ')])
    return data

print("input row of matrix A")
A = Matrix(input_matrix())
print("input row of matrix B")
B = Matrix(input_matrix())

print(f'Det of Matrix(A) = {A.det()}')
print(f'Det of Matrix(B) = {B.det()}')

print("Matrix(A+B) is:")
res = A.plus(B)
res.show()

print("Matrix(A-B) is:")
res = A.minus(B)
res.show()

print("Matrix(A*B) is:")
res = A.multiply(B)
res.show()
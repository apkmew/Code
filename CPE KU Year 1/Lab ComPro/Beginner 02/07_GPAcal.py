n = int(input('How many subject: '))
gpa = total = 0
for i in range(1,n+1) :
    c = float(input(f'Subject {i} Credits: '))
    g = input(f'Subject {i} Grade: ')
    total += c
    if g == 'A' : gpa += 4*c
    elif g == 'B+' : gpa += 3.5*c
    elif g == 'B' : gpa += 3*c
    elif g == 'C+' : gpa += 2.5*c
    elif g == 'C' : gpa += 2*c
    elif g == 'D+' : gpa += 1.5*c
    elif g == 'D' : gpa += 1*c
    elif g == 'F' : gpa += 0*c
print(f'Output: Total Credit = {total:.1f} ,GPA = {gpa/total:.2f}')
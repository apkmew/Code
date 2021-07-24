w = int(input('Weight: '))
h = int(input('Height: '))
h /= 100
bmi = w / h**2
print(f'Your BMI is {bmi:.1f}',end=' ')
if bmi >= 30 : print('You\'re in the obese range.')
elif bmi >= 25 : print('You\'re in the overweight range.')
elif bmi >= 18.6 : print('You\'re in the healthy weight range.')
else : print('You\'re in the underweight range.')
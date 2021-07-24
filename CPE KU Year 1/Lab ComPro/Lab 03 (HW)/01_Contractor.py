import math
def inputShape() :
    shape = int(input('Input Shape: '))
    return shape

def calculateSphere() :
    r = int(input('Input radius(meter): '))
    v = r**3 * 4 * math.pi / 3
    print('The volume is ' + '{:.2f}'.format(v) + ' cubic meter.')
    return v

def calculateCone() :
    r = int(input('Input radius(meter): '))
    h = int(input('Input height(meter): '))
    v = r**2 * h * math.pi / 3
    print('The volume is ' + '{:.2f}'.format(v) + ' cubic meter.')
    return v

def calculateCylinder() :
    r = int(input('Input radius(meter): '))
    h = int(input('Input height(meter): '))
    v = r**2 * h * math.pi
    print('The volume is ' + '{:.2f}'.format(v) + ' cubic meter.')
    return v

def calculatePrism() :
    w = int(input('Input width(meter): '))
    l = int(input('Input length(meter): '))
    h = int(input('Input height(meter): '))
    v = w * l * h
    print('The volume is ' + '{:.2f}'.format(v) + ' cubic meter.')
    return v

def calculatePyramid() :
    w = int(input('Input width(meter): '))
    l = int(input('Input length(meter): '))
    h = int(input('Input height(meter): '))
    v = w * l * h / 3
    print('The volume is ' + '{:.2f}'.format(v) + ' cubic meter.')
    return v

def calculatePrice(v) :
    price = int(input('Price(Bath) per 1 cubic meter: '))
    price *= v
    print('The price is ' + '{:.2f}'.format(price) + ' Baht.')

shape = inputShape()
if shape == 1 : v = calculateSphere()
elif shape == 2 : v = calculateCone()
elif shape == 3 : v = calculateCylinder()
elif shape == 4 : v = calculatePrism()
elif shape == 5 : v = calculatePyramid()
calculatePrice(v)
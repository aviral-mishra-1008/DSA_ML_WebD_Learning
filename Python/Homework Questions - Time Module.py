# a set of all HW questions

from datetime import *
date = datetime.now()
print("Today's date - ", date)
days_left = 31-10
print('These many days are left - ' , days_left)
print()
num = 5,10,9
for i in num:
    print(i)
print()
number = 5
print(number)
n = 5*2
print(n)
n = 5*2-1
print(n)
print()
n = '5@10@9'
print(n)
print()

for i in range(7,42,7):
    print(i)
print()
radius = float(input('Please enter the value of radius - '))
area = radius**2*3.14
print('area of circle is - ' , area)
print()
h = int(input('Please enter your height in cm - '))
i = h/2.54
f = i/12
print(f)
n = float(input('Enter the number - '))
j = n**2,n**3,n**4
print(j)
print()
x = float(input('Enter side 1 - '))
y = float(input('Enter side 2 - '))
z = float(input('Enter side 3 - '))
s = (x+y+z)/2
r = s-x
j = s-y
k = s-z
area = (s*r*j*k)**0.5
print('area is - ', area)
a = input('Press enter to exit')




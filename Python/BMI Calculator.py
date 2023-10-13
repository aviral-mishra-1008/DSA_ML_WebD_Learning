print('Feet to Meter Converter')
s = int(input('enter your feet value of height - '))
a = int(input('enter your inch value of height - '))
e = a/12
t = s+e
i = t/3.281
print(i, 'meter')
print('please take your height upto 2 decimal places')
x=int(input("enter your weight (in kg) - "))
y=float(input("enter your height (in meter) - "))
z = x/y**2
print(z)
if z<=27.3:
    print('NORMAL')
else:
    print('OBESE')
print ('thanks for using BMI calculator')

x = float(input('enter your height (in meter) -:'))
y = float(input('enter your weight (in Kg) -:'))
print('YOUR BMI-:')
z= y/x**2
print(z)

print('your result-:')

if z<=27.1:
    print('normal')
else:
    print('obese')
print('thanks for using BMI Calculator')

for i in range(4):
    for j in range(4):
        print("# ",end="" )
        print()
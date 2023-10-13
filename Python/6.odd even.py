#1
x,y,z = int(input('Enter number1 - ')),int(input('Enter number2 - ')),int(input('Enter number3 - '))
a = x+y+z
print('Sum1 - ', a)
s = {x,y,z}
print(s)
h = sum(s)
print('Sum2 - ', h)

#2
n = int(input('please enter the number - '))
if n<0:
    print('Invalid input')
else:
    if n%2 == 0:
        print('It is an even number')
    else:
        print('It is an odd number')
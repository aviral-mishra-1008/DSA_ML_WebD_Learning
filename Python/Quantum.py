print('WELCOME TO QUANTUM NUMBER GENERATOR')
n = int(input('please enter the principle quantum number - '))
print('')
for i in range(0,n):
    print('azimuthal quantum number values are - ', i)
    print('')
for j in range(-(n-1),n):
    print('magnetic quantum number values followed by spin quantum numbers are - ', j, '1/2, -1/2')
    print('')
s = 2*n**2
print('total number of electrons that can be filled -', s)
print('')
a = n
print('number of theoretically possible orbital type - ', a)
print('')
l = n**2
print('total possible orientations - ' , l)
print('')
print('Thanks for using it!')
input('Press enter to close')





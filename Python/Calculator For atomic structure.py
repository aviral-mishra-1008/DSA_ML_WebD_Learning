print('Welcome to Chemist')
p = int(input('Please enter closest integral approximate of wavelength in nm - '))
print()
e = 1240/p
print('The energy of the wave = ',e,'ev')
print()
t = e*1.6*(10)**-19
print('Energy in joules = ', t, "Note - e means to the 10th power for eg. 10^-19 = e-19")
v = t/6.6
i = v*(10)**34
print('The value of frequency - ', i, 'Hz')
print()
print('Welcome to part 2 - De-Broglie')
print()
w = int(input('Please enter your weight in kg - '))
b = 143/w
bb= b*(10)**-38
print("Your wavelength with respect to your velocity on Surface of Earth moving in space-time = ", bb, "m")
print()
vv = 460/b
o = vv*(10)**38
print("Your frequency = ",o, "Hz")
print()
ee = w*9*10000000000000000
print(':-) If I convert you into energy then this much will be produced - ', ee,"J")
print('Welcome to part 3 - Electron House')
print()
n = int(input(('Please enter the energy level or shell number of electron - ')))
z = int(input('Please enter the atomic number - '))
r = -13.6*(z**2/n**2)
print('Energy = ', r, "eV")
s = 0.0529*(n**2)/z
print('Radius - ', s, "nm")
print()
vvv = 2.18*(10)**6
g = vvv*n/z
print('Velocity - ', g, "m/s")
print()
a = int(input('Please enter the uncertainity in position of electron (interger only like - 1,2,3,4 etc. and NOT 3.2 or 4.3) - '))
print()
y = 5.18*(10)**-34/a
print('Uncertainity in momentum = ', y)
print()
am = 9.28*(10)**-31
m = am*g*s
print('angular momentum = ', m, "kgm/s^2")
print()
print("Welcome to part 4 - Quantum World")
nn = int(input('please enter the principle quantum number - '))
print('')
for i in range(0,nn):
    print('azimuthal quantum number values are - ', i)
    print('')
for j in range(-(nn-1),nn):
    print('magnetic quantum number values followed by spin quantum numbers are - ', j, '1/2, -1/2')
    print('')
ss = 2*nn**2
print('total number of electrons that can be filled -', ss)
print('')
aa = nn
print('number of theoretically possible orbital type - ', aa)
print('')
ll = nn**2
print('total possible orientations - ' , ll)
print('')
fd = int(input('Please enter orbital number (for s - 0, for p - 1, for d-2, for f-3) =  '))
yt = nn-fd-1
print('Number of radial nodes = ', yt)
print()
print("Number of angular nodes = ", fd)
print()
ui = nn-1
print("Total nodes = ", ui)
print()
print("Welcome to part 5 - Finale!")
print()
print("User Reveal")
input("Press the letter from which your name starts")
print()
print("Hi! Sir Vikas Baboo, using the program from Windows 10 HOME version on a DELL laptop. Your current location is aliganj, Lucknow")
print()
print('You have studied from Lucknow University and you are great at teaching chemistry!')
print()
print('Thanks for using it! :-), do report a feedback to the program developer')
input('Press enter to close')
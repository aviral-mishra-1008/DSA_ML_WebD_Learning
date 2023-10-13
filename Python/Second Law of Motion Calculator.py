print("Welcome to Connected Bodies Calc (Horizontal)")
print()
p = int(input('Press 0 for horizontal system and 1 for vertical system'))
if p==0:
    m = 0
    n = int(input('Please enter the number of masses in the system - '))
    print()
    for i in range(0,n):
        c = int(input('Please enter the mass in kg - '))
        print()
        m = m+c
        print(m)
    print('This last output will be considered as the net mass')
    j = int(input('Please enter the net force(N) - '))
    print()
    h = int(input("Please enter the net mass - "))
    print()
    a = j/h
    print('acceleration of the system = ',a,"m/s^2")
else:
    g = int(input('Please press 0 for vertical system under external force and gravity (without pulley) and 1 for system with "1" pulley'))
    print()
    if g==0:
        print('If the force is acting against the weight then  enter it in "+" and if it is working in the direction of weight then enter the value in (-)')
        print()
        m = 0
        n = int(input('Please enter the number of masses in the system - '))
        for i in range(0, n):
            c = int(input('Please enter the mass in kg - '))
            print()
            m = m + c
            print(m)
        print('This last output will be considered as the net mass - ')
        print()
        s = int(input('Please enter the net mass - '))
        l = s*9.8
        f = int(input('Please enter the external force exerted - '))

        w = f-l
        a = w/s
        print('acceleration of the system = ',a,"m/s^2")
    else:
        print('Project is under development! Check back soon!')
        print()
print('Thanks for using the program!')
input('Press enter to exit')



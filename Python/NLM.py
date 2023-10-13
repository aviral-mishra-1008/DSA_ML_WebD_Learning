print("Welcome to the Calc 2")
print("We have following modes - ","\n","1 - Frictionless Block pushed by an external force","\n","2 - Fricionless Pulley system (non constraint)","\n","3 - Horizontal system being pulled by external forces (frictionless)","\n","4 - Vertical system being pulled by one external force")
print()
u = int(input("Please enter the number associated with the program mode - "))
if u==1:
    print("Welcome to mode 1")
    y = float(input('Please enter the mass (in kg) - '))
    f = float(input("Please enter the force (in Newtons) - "))
    a = f/y
    print('acceleration of the system is = ', a, "ms^-2")
elif u==2:
    print("Welcome to mode 2")
    n = int(input("Please enter the number of masses on Right Side - "))
    r = []
    for i in range(1,n+1):
        x = float(input('Please enter the mass (in kg) - '))
        r.append(x)
    print(r)
    m = int(input("Please enter the number of masses on left side of pulley - "))
    l = []
    for j in range(1,m+1):
        y = float(input('Please enter the mass (in kg) - '))
        l.append(y)
    a = sum(r)
    s = sum(l)
    if a>s:
        h = a*9.8
        p = a*9.8
        aS = h-p
        L = aS/(a+s)
        print('The acceleration in system = ', L, "m/s^2")
    elif a==s:
        print('acceleration = 0, system is in equilibrium')
    else:
        h = a*9.8
        p = s*9.8
        aS = p-h
        L = aS/(a+s)
        print('The acceleration in the system is = ', L, "ms^-2")
elif u==3:
    print("Welcome to mode 3")
    n = int(input('Please enter the number of masses - '))
    r = []
    for i in range(1,n+1):
        u = float(input('Please enter the mass (in kg) - '))
        r.append(u)
    h = float(input('Force on right most block (in Newton and 0 in case there is no force) - '))
    g = float(input('Force on the left most block (in Newton and 0 in case there is no force) - '))
    gh = g-h
    s = sum(r)
    a = gh/s
    print('acceleration of the system is = ',a,"ms^-2")
elif u==4:
    print('Welcome to mode 4')
    n = int(input('Number of masses in the system - '))
    f = float(input('Value of aplied external upward force (if any, in newtons) - '))
    f_ = float(input('Value of aplied external downward force (if any, in Newtons) - '))
    m = []
    for i in range(1,n+1):
        M = float(input('Please enter the mass (in kg) - '))
        m.append(M)
    s = sum(m)
    mg = s*9.8
    a = (f-f_-mg)/(s)
    print('Considering upward as positive convention, the acceleration of the system = ',a,"ms^-2")
else:
    print('Invalid input, restarting.......... ......... ........')
    g = input('Press enter to restart')
    j = print('WINDOWS FILE ERROR')
print("Thanks for using the program!")
U = input("Press any key to exit")
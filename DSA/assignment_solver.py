while True:
    m = 9.1*10**(-31)
    u = 1.6*10**(6)
    n_au = 3.87*10**(28)
    e = 1.6*10**(-19)

    x = float(input("Enter Cu: "))
    y = float(input("Enter Au: "))
    x = x/63.5
    y = y/196
    Frac = x/(x+y)
    Frac_2 = 1-Frac
    rho_cu = 17*10**(-9)
    rho_au = 22*10**(-9)
    C = 450*10**(-9)
    print(Frac,"  ",Frac_2)
    rho_alloy = rho_au + C*Frac*Frac_2
    print('Rho Alloy = ',rho_alloy)


    l = (m*u)/(n_au*(e**(2))*rho_alloy)
    print('The Leff = ', l)

    l_au = (m*u)/(n_au*(e**(2))*rho_au) 
    print("l_au: ",l_au)
    l_cu = (l*l_au)/(l_au-l)

    print('L solute: ',l_cu)


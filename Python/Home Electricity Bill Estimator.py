print('Welcome To Electricity Assistant ')
print('INSTRUCTIONS')
print('1. Please select the place in the house which you want to explore out of the following list -')
S = {'Mandir = 1','Store Room  = 2','Bahar Kamra = 3','Sone wala room = 4 ','Kitchen = 12','TV Room = 5','Toilet = 10','Bathroom = 9','Lobby = 6','Seedhi = 7','Baramda = 8','Outside = 11'}
for i in S:
    print(i)
x = int(input('Please enter the number corresponding to your room search -  '))
if 0<x<13:
    print('Welcome to intelligent support, please provide following details, so that we can serve you properly')
else:
    print('Sorry! The value entered by you does not correspond to our system value list') 
if x<9:
    y = int(input('Please enter the number of fans - '))
    G = int(input('Please enter the number of hours it is used - '))
    u = int(input('Please enter the number of LED Bulbs - '))
    M = int(input('Please enter the number of hours it is used - '))
    i = int(input('Please enter the number of tubelights - '))
    N = int(input('Please enter the number of hours it is used - '))
    o = int(input('Please enter the number of AC -  '))
    j = int(input('Please enter the numeber of hours it is used - '))
    s = (y*G*0.075+u*M*0.009+i*N*0.036+o*j*1.5)*6.5
    print('Here is the amount of money that will go into this room, if all appliances are used for the provided time : Rupees', s)
    H = int(input('do you want to know how much each appliance takes? Put 1 for yes and 0 for no - '))
    if H==0:
        print("it's fine!")
    else:
        V = y*G*6.5*0.075
        print('Fans = ', V)
        Q = u*M*6.5*0.009
        print('LED = ', Q)
        W = i*N*6.5*0.036
        print('TUBELIGHTS = ', W)
        R = o*j*6.5*1.5
        print('ac = ', R)
    if s<=75:
        print('You are going fine :-) Thanks for using the program')
    else:
        print('Here is your smart action plan - ')
        print('You have to limit the usage of ac, you can run ac for 10 minutes after every 1 or 1.5 hour from 12 am onwards and for 1.5 hour in two shifts at night, you can also run for 3 hour at night but once.')
        print('We recommend you to use LED and limit the use of tubelights')
        print('While ac is on you can have the electricity spent on fans, remeber fans take up 75W and constitute for upto 30-40% of the bill ')
        print('Thanks for using the program :-)')

else:
    p = int(input('Please enter the number of Fridge (if any) - '))
    Y = int(input ('Please enter the number of hours it is used - '))
    l = int(input('Please enter the number of Geysers (if bathroom) - '))
    L = int(input ('Please enter the number of hours it is used - '))
    f = int(input('Please enter the number of LED bulbs - '))
    F = int(input ('Please enter the number of hours it is used - '))
    m = int(input('Please enter the number of fans - '))
    M = int(input ('Please enter the number of hours it is used - '))
    j = int(input('Please enter the number of motors - '))
    J = int(input ('Please enter the number of hours it is used - '))
    a = (p*Y*0.3+l*L*2+f*F*0.009+m*M*0.06+j*J*0.745)*6.5
    print(  'Here is the amount of money that will go into this room, if all appliances are used for the provided time : Rupees', a )
    B = int(input('do you want to know how much each appliance takes? Put 1 for yes and 0 for no - '))
    if B==0:
        print('Ok fine!')
    else:
        I = p*Y*6.5*0.3
        print('Fridge = ', I)
        O = l*L*6.5*2
        print('Geysers = ', O)
        Z = f*F*6.5*0.009
        print('LED - ', Z)
        X = m*M*6.5*0.06
        print('Fans - ', X)
        V = j*J*6.5*0.745
        print('Motor = ', V)
    if a<=30:
        print('You are going fine, thanks for using the program :-)')
    else:
        print('Here is a list of few things to improve ')
        print('You can avoid the use of LED in daylight')
        print('Run motor when water comes with max force to avoid much current usage')
        print('Thanks for using the program :-)')
print('IF YOU WILL FOLLOW THE RECOMMENDATIONS THEN YOUR MONTHLY ELECTRICITY BILL WILL RANGE BETWEEN 5000-6000 UNDER MAX CONSUMPTION')
print('IF YOU WERE NOT PROVIDED WITH RECOMMENDATIONS THEN YOU ARE GOING GREAT AND YOUR MONTHLY BILL WILL COME IN RANGE OF 2000-5000 ')
print('IF YOU WILL NOT FOLLOW THE RECOMMENDATIONS THEN BILL WILL RANGE ANYWHERE BETWEEN 6000-150000')
print('HOWEVER DUE TO GRACE OF THE CLIMATE OF INDIA, BILL WILL SOMEWHAT BALANCE OUT CONSIDERING THE YEARLY ELECTRICITY CONSUMPTION')
print('DO VISIT AGAIN, ENERGY SAVED IS ENERGY PRODUCED!')




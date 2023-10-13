import random
print("Welcome User!")
p = 1000000
print('cash available - ',p)
x = input("Enter yes if you are bank official - ")
if x=='yes':
    y = int(input('Please enter admin password - '))
    if y==2302201907042019:
        print('Welcome admin')
        y = int(input('Please enter the amount you wish to add - '))
        p = p+y
    else:
        print("Don't try to trespass!, your attempt has been recorded!")
else:
    print('User kindly follow the process carefully')
    j = int(input('Please enter your 3 digit account number - '))
    t = {101:"Rachna Sinha",111:'aviral mishra',121:'naman',131:"pratyush",141:'aryan kumar',151:'Vikramaditya Singh Chauhan'}
    try:
        print('Hi',t[j])
        h = int(input('Please enter your 4 digit pin - '))
        r = {1010:"Rachna Sinha",1110:'aviral mishra',1210:'naman',1310:"pratyush",1410:'aryan kumar',1510:'Vikramaditya Singh Chauhan'}
        try:
            print(r[h])
            print('Your pin matched with our records!')
            b = int(input('Please enter the amount of money you want to withdraw - '))
            av = p-b
            print('Cash left in atm = ',av)
            q = input('Do you want receipt (yes/no) - ')
            if q=='yes':
                print('Name - ',t[j], "\n", 'Money retrieved - ',b,"\n", 'balance left = 0')
            else:
                print('Thanks for using the service!')
        except:
            print('You entered a wrong pin, please restart!')
    except:
        c = input('You do not have a bank account is this bank, would you like to make one? (yes/no) - ')
        if c=='yes':
            x = input('Your name - ')
            y = input('Date Of Birth - ')
            z = input('Jadhar Card Number - ')
            a = input('Phone number - ')
            s = input('OTP - ')
            ss = input('Your address - ')
            X = random.randint(152,999)
            print('Your account number is - ', X)
            Y = random.randint(1511,9999)
            print('Your account pin is - ', Y)
            print('Thanks for using the service!')
        else:
            print('Do visit again!')
print('Mishra Brothers Pvt Limited')
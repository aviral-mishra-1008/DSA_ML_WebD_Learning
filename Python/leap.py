n = int(input("Please enter the year - "))
if n==0:
    print('There was no year called 0, please check your input!')
else: 
    if n%400==0:
        print('Leap Year')
    else:
        if n%100==0:
            print('Not a leap year')
        else:
            if n%4==0:
                print('Leap Year')
            else:
                print("Not a leap year")



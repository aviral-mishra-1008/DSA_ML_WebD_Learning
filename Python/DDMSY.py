x = int(input("Please enter the number of non leap years - "))
y = int(input("Please enter the number of leap years - "))
z = x*365+y*366
print("Number of days - ", z)
hours = z*24
print("Number of hours - ",hours)
minutes = hours*60
print("Number of minutes - ",minutes)
seconds = minutes*60
print("Number of seconds - ",seconds)
print("Incase you have confusion whether the years you thought of were leap year or not, you can check here")
h = input("Enter yes to check for leap year - ")
if h=="yes":
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
print("Thanks for using the program!")

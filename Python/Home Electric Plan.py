print('WELCOME TO HOME ELECTRICITY GUIDE')
s = {'Mandir = 0.007','Lobby  = 0.518','Guestroom = 0.190','Restroom = 1.717','Kitchen = 0.882','Sleeproom = 1.668','Toilet = 0.009','Bathroom = 2.009','Aangan = 0.400','Seedhi = 0.009','Baramda = 0.009','Outside = 0.017','Chargers = 0.020','House = 7.455'}
for i in s:
    print(i)
print('INSTRUCTIONS')
print('1. Please select the place in the house which you want to explore')
print('2. Enter the time for which you want to know the cost of running all appliances')
print('3. Remember that value present in front of the name on the place is the CONSUMPTION VALUE')
print('4. Remember that time you enter should be in HOURS')
print('5. The cost printed is in INR')
print('6. All units are based on SI system of units')
print('7. Whenever there is no decimal number then please type .0 after number, For Example in place of 4 you need to enter 4.0')
print('month is considered to be an average of 30 days')
x = float(input('please enter the consumption value - '))
y = float(input('enter the time - '))
z = x*y
c = z*6.5
d = c*30
e = c*365
f = c*366
g = e*8+f*2
print('cost per day - ', '₹',c)
print('cost per month - ', '₹',d)
print('cost per year - ', '₹',e)
print('cost in a leap year - ', '₹',f)
print('cost in a decade - ', '₹',g)
print('thanks for using home electricity guide')


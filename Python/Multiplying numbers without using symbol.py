n = int(input('enter the number 1 - '))
i = int(input('enter the number 2 - '))
l = [0]
for j in range(i):
    l.append(n)
    x = sum(l)
print(x)
    
year = int(input('Please enter the year - '))
if(((year%400==0) or (year%4==0)) and (year%100!=0)):
    print("It's a leap year")
else:
    print('no')
    

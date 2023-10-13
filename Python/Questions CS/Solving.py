'''The files of computer science'''
#functions

def printx(x):
    '''This function gives sign of input x'''
    if x==0:
        print("Zero")
    elif x<0:
        print("Negative")
    elif x>0:
        print("positive")
    else:
        print("Invalid Input")

def even_odd(x):
    '''This function return true is input x is even else false'''
    print(x%2==0)

def seconds_year():
    '''This function gives the number of seconds in a year'''
    print(365*24*60*60) 

def divisible(x,y):
    '''Tells whether the first number is divisble by second or not'''
    print(x%y==0)

def datetoyeartoday(x,y):
    '''Takes input of a day number (x) in range 2-365 from an year and then the day on first date of year (y) then displays the day on input day number'''
    dict_days = {'Monday':1,"Tuesday":2,"Wednesday":3,'Thursday':4,"Friday":5,"Saturday":6,"Sunday":7}
    list_days = ["none",'Monday',"Tuesday","Wednesday",'Thursday',"Friday","Saturday","Sunday"]
    days = x//7 #Gives us the value of weeks passed
    days = x-(days*7) #Finding difference between the input day from the lastest instance of repitition 
    specific_day = dict_days[y]
    if specific_day<5 or specific_day==5:
        print(list_days[specific_day+days])
    elif specific_day==6 and days<2:
        print(list_days[specific_day]+1)
    elif specific_day==6 or specific_day==7 and days>=1:
        print(list_days[specific_day-7+days])

def signum(x):
    if x<0:
        return(-1)
    elif x==0:
        return(0)
    elif x>0:
        return(1)
    else:
        print("Invalid Input")

def sigma(n):
    y = signum(n)
    if y==-1:
        a = abs(2*n)
        b = abs(n)
        sum = (n/2)*(a+b)
        print(-sum)
    elif y==0:
        print(0)
    elif y==1:
        k = 2*n - n
        print(k*(n+(2*n)))

def date_to_format(n):
    h = {1:'Jan', 2:'Feb', 3:'Mar', 4:'Apr', 5:'May', 6:'Jun', 7:'Jul', 8:'Aug', 9:'Sep', 10:'Oct', 11:'Nov', 12:'Dec'}
    lst = list(str(n))
    if lst[0]=="0":
        v = h[int(lst[1])]
    elif lst[0]=="1":
        m = int(lst[0]+lst[1])
        v = h[m]
    print(v,lst[2]+lst[3],",",lst[4]+lst[5]+lst[6]+lst[7])

def miltime(x,y):
    g = abs(x-y)
    lst = list(str(g))
    if len(lst)==2:
        print(lst[0]+lst[1],"minutes")
    elif len(lst)==3:
        print(lst[0],"Hours",lst[1]+lst[2],"Minutes")
    elif len(lst)==4:
        print(lst[0]+lst[1],"Hours",lst[2]+lst[3],"Minutes")
    elif len(lst)==1:
        print(lst[0],"minutes")
    



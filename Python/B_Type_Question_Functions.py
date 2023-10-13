'''
total = 0 
def sum(arg1,arg2):
    total = arg1+arg2
    print("Total - ",total)
    return total
sum(10,20)
print("Total - ",total)
'''
'''
def Tot(number):
    Sum = 0
    for C in range(1,number+1):
        Sum+=C
    return Sum

print(Tot(3))
print(Tot(6))
'''

#Q2
# 1-5-9-10-5-6-1-2-3-7-11

#Q3 - None, print is used not return

#Q4 - None, return is used first

#Q5
num = 1
def myfunc():
    global num
    num = 10
    return num
print(num)
print(myfunc())
print(num)
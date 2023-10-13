#question 12
#let's do this
#Lets make 2 lists and enjoy the programming by adding equivalents
'''
m = []
n = []
x = int(input("How many element do you want - "))
for i in range(x):
    t = int(input("Enter 0 for number and 1 for string - "))
    if t==0:
        f = float(input("Enter number - "))
        m.append(f)
    else:
        f = input("Enter here - ")
        m.append(f)
print("Ussr, your first list has been made now let's make the next one which will be of same size")
for j in range(x):
    tt = int(input("Enter 0 for number and 1 for string - "))
    if t==0:
        ff = float(input("Enter number - "))
        n.append(ff)
    elif tt==1:
        ff = input("Enter here - ")
        n.append(ff)
r = []
for s in range(x):
    a = m[s]+n[s]
    print("For index places",s,"in the 2 lists",'the sum is',"\n",a)
    r.append(a)
print("Here's the collective result - ",r)
'''

lst = []
x = int(input("How many elements you need - "))
for i in range(x):
    t = int(input("Enter 0 for number and 1 for string"))
    if t==0:
        f= float(input("Enter here - "))
        lst.append(f)
    elif t==1:
        f = input("Enter here - ")
        lst.append(f)
print(lst)

m = int(input("If you're searching for num enter 0 & for string enter 1 - "))

if m==0:
    s = float(input("Enter here - "))
    for i in lst:
        if i==s:
            print((lst.index(i)))
            print(lst)
        else:
            print("Element not there")
elif m==1:
    s = input("What are you searching for - ")
for i in lst:
    if i==s:
        print(lst)
        print(lst.index(i))
    else:
        print("invalid input")
    

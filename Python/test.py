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
        m.append(ff)
    elif tt==1:
        ff = input("Enter here - ")
        n.append(ff)
print(m)
print(n)
''''''
g = []
f = [2,3,4,5,6,7]
j = [2,3,4,5,6,7]
for i in range(len(f)):
    g.append(f[i])
    g.append(j[i])
print(g)
'''
X = [1,2,3,4,5]
print(sum(X))
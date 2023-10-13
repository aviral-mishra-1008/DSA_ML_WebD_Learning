#Question 9
#We'll use print to get the answer
#Keeping it simple

print("   @   ")
print("  @ @  ")
print(" @ @ @ ")
print("  @ @  ")
print("   @   ")

#question 7
h = []
print("Welcome User, note - that you enter your address in letters and only your pincode in numbers")
x = input("Your address - ")
for i in x:
    if (i=="0") or (i=="1") or (i=="2") or (i=="3") or (i=="4")or (i=="5")or (i=="6")or (i=="7")or (i=="8")or (i=="9"):
        h.append(i)
print("Your pin code is - ", h)


#question 10
tup1 = ((1,2),(3,4.14,5.15),(7,8,12,15))
h = []
for i in range(0,3):
    for j in tup1[i]:
        r = []
        r.append(j)
        m = sum(r)
        n = m/len(tup1[i])
        h.append(n)
    
print("The means are - ",h)

#Question 11
lst = [0,1,2,3,4,5,6,7,8,101,102,110,1108,17,18,16]
x = int(input("Enter starting number  - "))
y = int(input("Enter ending number - "))
m = lst[x-1:y]
s = min(m)
a = max(m)
print('Minimum value is - ',s, "and the max value is - ", a)

#Question 12
m = []
X = input("Please enter text - ")
h = X.split()
for i in range(len(h)):
    f = len(h[i])
    m.append(f)
r = max(m)
y = m.index(r)
print("Biggest word is - ", h[y])

# Question 13
n = int(input("Please enter the number of employees - "))
a = []
s = []
t = []
for i in range(n):
    x = int(input("age - "))
    if (x>=26) and (x<=35):
        a.append(1)
    elif (x>=36) and (x<=45):
        s.append(1)
    elif (x>= 46) and (x<=55):
        t.append(1)
A = sum(a)
S = sum(s)
T = sum(t)
print(A,S,T)
'''
d = {}
n = int(input("How many students are needed - "))
for i in range(n):
    damad = input("Enter name - ")
    tagada = input("Enter phone number - ")
    d[damad] = tagada
bata_do = input("Kaunsi key samajhni h? - ")
if badta_do in d:
    print("Yes! Key exists")
    x = input("you want to modify or delete - ")
    if x=="modify":
        h = input("enter - ")
        d[x]=h
    elif x=="delete":
        d.pop(x,"tech issue")
    else:
        print("Invalid input")
else:
    print("Key non existent")
print(d)
'''
'''
from functools import reduce
g = [2,3,4,5,6,7,8,9,1,10]
y = reduce(lambda x,b: x*b+2,g)
print(y)
'''
h = [1,2,53,24,64,12,3]
h.sort()
print(h)
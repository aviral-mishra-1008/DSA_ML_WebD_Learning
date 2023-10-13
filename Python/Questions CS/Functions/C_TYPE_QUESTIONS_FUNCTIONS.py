#Q1
"""
def void_dolinr(x):
    print(x/80)

def non_void_dolinr(y):
    z = (y/80)
    print(z)
    return(z)

g = float(input("Enter the money in usd - "))
void_dolinr(g)
non_void_dolinr(g)
"""

#Q2
'''
def volume(x,y,z):
    print("volume of box is - ",x*y*z)

h,l,b = float(input("Height - ")),float(input("Length - ")),float(input("Breadth - "))
volume(h,l,b)
'''

#Q3
'''
def func1(x=2):
    print(x**3)

u = int(input('num - '))
func1()

def func2(y,z):
    if type(y)==str and type(z)==str:
        print(y==z)
    else:
        print("Invalid Input")
    
hh = input("Str 1 - ")
hhh = input("Str 2 - ")
func2(hh,hhh)
'''

#Q4
'''
def random_fun(x,y):
    import random 
    print(random.randrange(x,y))
    print(random.randrange(x,y))
    print(random.randrange(x,y))

n = int(input("Num1 - "))
m = int(input("Num2 - "))

random_fun(n,m)
'''

#Q5
'''
def lenstr(x,y):
    print(len(x)==len(y))

g = input("TELL - ")
h = input("TELL - ")

lenstr(g,h)
'''
'''
#Q6
def nthRoot(x,n=2):
    z = x**(1/n)
    print(z)
    return(z)

x = int(input("Num1 - "))
y = int(input("Num2 - "))

nthRoot(x,y)
'''

#Q7
'''
import random
n = int(input("damn - "))
f = random.randrange(10**(n-1),(10**(n)-1))
print(f)
'''

'''
#Q8
def fun_check(x,y):
    if x[-1]>y[-1]:
        print(y)
    else:
        print(x)

r = (input("Num - "))
t = (input("Nums - "))

fun_check(r,t)
'''

#Q9
'''
h = []
def ap(x,y):
    z = abs(x-y)
    d = z/(5)
    for i in range(4):
        x = x+d
        h.append(x)
        print(h)

mm = int(input("Num - "))
mmm = int(input("Num - "))
ap(x,y)
'''

#test question
'''
x = [4,5,6]
def hunt(y):
    y[1]=10
    return(y)

print(x)
z = hunt(x)
print(z)
print(x)
'''
# import random
# # print(int(20 + random.random()*5))
# city = ["Kabul","Islamabad","Jerusalem","Magadh"]
# pick = random.randint(0,3)
# for I in city:
#     for j in range(1,pick):
#         print(I, end="")
#     print()
# print(pick)

# fo = open("V:\\Django Full On\\Ecommerce Website Genuine Server\\Shvaas\\Vyas\\static\\Invoice\\myfile.txt", "w+")
# print ("Name of the file: ", fo.name)
# # Assuming that the file contains these lines# TechBeamers# Hello Viewers!!
# seq=["TechBeamers\nHello Viewers!!"]
# fo.writelines(seq )
# fo.seek(0,0)
# for line in fo: 
#     print (line)
# fo.close()
# txt = eval(input("Enter your input: "))
# print ("Received input is : ", txt)

colors = ['red\n', 'yellow\n', 'blue\n']
f = open("V:\\Django Full On\\Ecommerce Website Genuine Server\\Shvaas\\Vyas\\static\\Invoice\\myfile.txt", "w+")
f.writelines(colors)
f.seek(0,0)
for line in f: print (line)
f.close()

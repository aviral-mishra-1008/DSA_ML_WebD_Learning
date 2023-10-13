'''<doctype=python>'''
'''
print(2**(2**3))

def printer():
    t=15
    print(t)
t = 95
print(t)
printer()
print(t)
'''
'''
def Cubes(n):
    try:
        if n%1==0:
            print(n**3)
    except:
        print(8)

Cubes()
'''
'''
def myfun(l,v):
       l[0]+=2
       v+=2
       print("values variables within function call: ",l,v)
       return
#__main__
list1=[1]
var1=1
print("values variables before function call:",list1,var1)
myfun(list1,var1)
print("values variables after function call :", list1,var1)
'''
'''
L = ["There",["are","a"],["few","words"],"that", "we", "will","use"]
'''
print(3.0)


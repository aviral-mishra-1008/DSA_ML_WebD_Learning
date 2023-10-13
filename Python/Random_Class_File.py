# <DOCTYPE = Python>
g = []
h = int(input('HOW MANY NUMBERS ARE THERE- '))
i = 1
while i<=h:
    x = int(input('ENTER YOUR NUMBER - '))
    g.append(x)
    i = i+1
print(g)
#exported progr
def rot(x, y):
   while(y):
      x, y = y, x % y
   return x
n1=g[0]
n2=g[1]
gcd=rot(n1,n2)
for i in range(2,len(g)):
   gcd=rot(gcd,g[i])
print("gcd is: ",gcd)

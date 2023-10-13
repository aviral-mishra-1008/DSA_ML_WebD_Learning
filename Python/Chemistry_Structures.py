
def even_structure(x):
    y = x
    if y%2==0 and x!=4 and x!=2:
        print("\\","/\\"*int((y/2)-1),sep="")
    elif y==1:
        print("CH4")
    elif y==2:
        print('/')
    elif y==4:
        print('/\/')

def odd_structure(y):
    x = y
    print("\\/"*int((x-1)/2))

def structures(n):
    print("Currently we print only non-alicyclic hydrocarbons!")
    if n%2==0 or n==1:
        even_structure(n)
    if n%2!=0 and n!=1:
        odd_structure(n)
    print("Hi User! In the generated structure, each curve represents a carbon. These structures are the real line dot structures for hydrocarbons")

y = int(input("Yes sir! How many carbons? - "))
structures(y)

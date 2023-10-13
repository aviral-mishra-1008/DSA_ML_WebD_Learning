'''
for i in range(1,num_rows+1):
    for j in range(1,i+1):
        print("*", end=" ")
    print()
for i in range(num_rows+1,0,-1):
    for j in range(1,i+1):
        print("*", end=" ")
    print()
'''
'''
def print_a_triangle_fool():
    n = int(input("Damn - "))
    for i in range(1,n+1):
        p = n-i
        print(" "*p,"* "*i," "*p)
    for j in range(n,0,-1):
        q = n-j
        print(" "*q,"* "*j," "*q)

print_a_triangle_fool()
'''
def lets_print_the_damn_thing():
    n = int(input("What will be radius (intger and >1) - "))
    print(" "*n,"0000")
    for i in range(n+1,1,-1):
        print(" "*(i-1),"0"," "*-2*i,"0")
lets_print_the_damn_thing()
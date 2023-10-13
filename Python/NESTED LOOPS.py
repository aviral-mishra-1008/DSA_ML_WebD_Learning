'''
key = 'panda'
correct = False
while not correct:
    inp = input("Enter secret key: ")
    if inp=="Secret":
        print("CORRECT")
    else:
        print('Wrong')
        '''
        
for iMus in range(10):     # : was missing, no indentation for second line, in operator was missing
    b = 19+iMus
    print(b)

k = 2                      # proper indentation wasn't used, k is not defined 
while k<10:  
    print(k)  
    k = k+2          

'''
a = 5
while a<10:               #syntax error, else used without a predefined if condition
    else:
        print(a+1) 
'''

a = 5                     #no condition is specified for while loop, 
while a>0:
    print(a) 
    a -= 1     

for p in range(3):       #no : used, no indentation, syntax errors
    for q in range(3):
        print(p*q)
    else:
        print('outer loop ends')      
        
                
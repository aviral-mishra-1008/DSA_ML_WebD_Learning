# -*- coding: utf-8 -*-
"""
Created on Thu Apr 15 11:31:29 2021

@author: GCPL77832
"""
"""
# This is the example of print simple pyramid pattern  
n = int(input("Enter the number of rows"))  
# outer loop to handle number of rows  
for i in range(0, n):  
    # inner loop to handle number of columns  
    # values is changing according to outer loop  
        for j in range(0, i + 1):  
            # printing stars  
            print("* ", end="")       
  
        # ending line after each row  
        print()
 """       
        
        
"""       
# This is the example of print simple reversed right angle pyramid pattern  
rows = int(input("Enter the number of rows:"))  
k = 2 * rows - 2  # It is used for number of spaces  
for i in range(0, rows):  
    for j in range(0, k):  
        print(end=" ")  
    k = k - 2   # decrement k value after each iteration  
    for j in range(0, i + 1):  
        print("* ", end="")  # printing star  
    print("")  

"""
'''
# printing downward half pyramid
rows = int(input("Enter the number of rows: "))  
  
# the outer loop is executing in reversed order  
for i in range(rows + 1, 0, -1):    
    for j in range(0, i - 1):  
        print("*", end=' ')  
    print(" ") 
'''



  
    
# printing triangle pyramid    
n = int(input("Enter the number of rows: "))  
m = (2 * n) + 2  
for i in range(0, n):  
    for j in range(0, m):  
        print(end=" ")  
    m = m - 1  # decrementing m after each loop  
    for j in range(0, i + 1):  
        # printing full Triangle pyramid using stars  
        
        print("* ", end=' ')  
    print(" ")     
    
     
'''    
  #printing downward triangle pyramid
rows = int(input("Enter the number of rows: "))  
  
# It is used to print space  
k = 2 * rows - 2  
# Outer loop in reverse order  
for i in range(rows, -1, -1):  
    # Inner loop will print the number of space.  
    for j in range(k, 0, -1):  
        print(end=" ")  
    k = k + 1  
    # This inner loop will print the number o stars  
    for j in range(0, i + 1):  
        print("*", end=" ")  
    print("") 
    
    
    
    
 # printing diamond shaped pattern   
rows = int(input("Enter the number of rows: "))  
  
# It is used to print the space  
k = 2 * rows - 2  
# Outer loop to print number of rows  
for i in range(0, rows):  
    # Inner loop is used to print number of space  
    for j in range(0, k):  
        print(end=" ")  
    # Decrement in k after each iteration  
    k = k - 1  
    # This inner loop is used to print stars  
    for j in range(0, i + 1):  
        print("* ", end="")  
    print("")  
  
# Downward triangle Pyramid  
# It is used to print the space  
k = rows - 2  
# Output for downward triangle pyramid  
for i in range(rows, -1, -1):  
    # inner loop will print the spaces  
    for j in range(k, 0, -1):  
        print(end=" ")  
    # Increment in k after each iteration  
    k = k + 1  
    # This inner loop will print number of stars  
    for j in range(0, i + 1):  
        print("* ", end="")  
    print("")  
'''
# import numpy as np
# lis = [1,2,2,4,4,4]
# counter = []
# count = []
# check = 0
# for i in lis:
#     if i in counter:
#         continue
#     else:
#         counter.append(i)
#         x = lis.count(i)
#         if x in count:
#             check = 1
#             break
#         else:
#             count.append(x)

# if check==0:
#     return(True)

# elif check==1:
#     return(False)

while(True):
    M = float(input("Mass: "))
    # Z = float(input("Rank: "))
    Na = 6.022
    density = float(input("Density: "))
    # if Z==4:
    #     a = 2*((2)**(0.5))*r*(10**(-10))
    #     e = a**3

    # else:
    #     a = 4*r/(3**(0.5))
    #     f = a*(10**(-10))
    #     e = f**3

    ans = Na*density/M

    print(ans)

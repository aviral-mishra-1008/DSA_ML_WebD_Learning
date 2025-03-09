from math import floor, ceil
t = int(input(""))
while t>0:
    n = int(input(""))
    s = input("")

    cDash = s.count('-')
    cBigD = s.count('_')

    print(floor(cDash/2)*ceil(cDash/2)*cBigD)
    t-=1
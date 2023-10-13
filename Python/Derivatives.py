print('Welcome! This is the program that will give you variable of a single term only')
print('Use 0.5 as power for underoot')
x = int(input('If it is an exponent based term then enter 0 else enter 1 - '))
if x == 0:
    x = input('Enter the variable - ')
    y = int(input('Enter the power - '))
    z = (y-1)
    print('result - ', y, x, '^', z, sep="")
else:
    print('Please change the variable to x, it means here you can use only x as variable')
    dct = {"logx":"1/x","sinx":"cosx","cosx":"-sinx","secx":"secxtanx","tanx":"sec^2x","cosecx":"-cosecxcotx","cotx":"-cosec^2x","e^x":"e^x"}
    c = input('Enter the term(single term only) - ')
    print(dct[c])
v = input('Press any key to quit')
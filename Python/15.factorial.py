def fact(n):
    s = 1
    for i in range(1,n+1):
        s = s*i
    return (s)
t = int(input('please enter the number - '))
if t<0:
    print('invalid input')
else:
    num = fact(t)
    print("The factorial of",t,"is",num)



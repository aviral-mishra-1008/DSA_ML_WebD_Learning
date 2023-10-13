def fib(n):
    a = 0
    b = 1
    if n>=2:
        print(a)
        print(b)
    else:
        print('Number not valid. Please enter a value greater than 1')
    for i in range(2,n):
        c = a+b
        a = b
        b = c
        print(c)

fib(int(input("Please Enter the number - ")))

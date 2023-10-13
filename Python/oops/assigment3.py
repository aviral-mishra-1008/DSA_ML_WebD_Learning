print("Hello user!")


def ques1():
    print("Welcome User")
    l1 = []
    l2 = []
    while True:
        print("List 1 entries")
        print("Press 1 if your element is an integer\nPress 2 for a decimal number\nPress 3 for a alphanumeric input")
        print("please use ' ' in string")
        x = int(input("Your Choice: "))
        if x==1:
            num = int(input("Enter : "))
            l1.append(num)
        elif x==2:
            numd = float(input("Enter: "))
            l1.append(numd)
        elif x==3:
            string = input("Enter: ")
            l1.append(string)
        else:
            print("Invalid input")
        choice = input("Press '1' (please ensure to use '' before entering element) to enter more elements and any other key to exit list 1 making process! : ")
        if choice=='1':
            continue
        else:
            break

    while True:
        print("List 2 entries")
        print("please use ' ' in string")
        print("Press 1 if your element is an integer\nPress 2 for a decimal number\nPress 3 for a alphanumeric input")
        x = input("Your Choice: ")
        if x==1:
            num = int(input("Enter : "))
            l2.append(num)
        elif x==2:
            numd = float(input("Enter: "))
            l2.append(numd)
        elif x==3:
            string = input("Enter: ")
            l2.append(string)
        else:
            print("Invalid input")
        choice = input("Press '1' (please ensure to use '' before entering element) to enter more elements and any other key to exit list 1 making process! : ")
        if choice==1:
            continue
        else:
            break



    print('List 1 is : ', l1, '\n','List 2 is: ',l2)
    #checking for their equality!


    if len(l1)==len(l2):
        check = []
        for i in range(len(l1)):
            if l1[i] == l2[i]:
                check.append(1)
            else:
                break
        if len(check) == len(l1):
            print("Lists are equal!")
        else:
            print("Lists are unequal!")
    else:
        print('Lists are unequal!')



def ques2():
    l = []
    while True:
        x = int(input('Please enter a number: '))
        l.append(x)
        choice = int(input('enter 1 to continue and 0 to exit: '))
        if choice==1:
            pass
        elif choice==0:
            break

    print('Maximum value is : ',max(l))

def ques3():
    l = []
    while True:
        x = int(input('Please enter a number: '))
        l.append(x)
        choice = int(input('enter 1 to continue and 0 to exit: '))
        if choice==1:
            pass
        elif choice==0:
            break
    x = max(l)
    l.remove(x)
    print("The second maximum element is: ",max(l))

def ques4():
    l = []
    while True:
        x = int(input('Please enter a number: '))
        l.append(x)
        choice = int(input('enter 1 to continue and 0 to exit: '))
        if choice==1:
            pass
        elif choice==0:
            break


def ques5():
    l = []
    while True:
        x = int(input('Please enter a number: '))
        l.append(x)
        choice = int(input('enter 1 to continue and 0 to exit: '))
        if choice==1:
            continue
        elif choice==0:
            break
    l1 = [[]]
    for i in range(len(l) + 1):
        for j in range(i):
            l1.append(l[j: i])
    return l1


def ques6():
    l = []
    position = int(input("Position: "))
    try:
        element = int(input("Put in the value: "))
    except:
        element = input("Put in the value: ")
    try:
        l.insert(position, element)
        return(l)
    except:
        print("We couldn't insernt the element at desired location because list is out of index!")

def ques7():
    l = [1,2,3,2.2,2.3,2.4,'string','ulan']
    l_num = []
    l_deci = []
    l_string = []
    for i in l:
        x = type(i)
        if x==str:
            l_string.append(i)
        elif x==int:
            l_num.append(i)
        elif x==float:
            l_deci.append(i)
        else:
            "Unadjusted Type!"
    return(l_num,l_string,l_deci)

def ques8():
    mat = []
    print("Please enter row wise element!")
    m = int(input('How many rows exist? : '))
    n = int(input("How many column exist?: "))
    for i in range(1,m+1):
        l = []
        print("This is row",i)
        for j in range(n):
            x = int(input("Enter element : "))
            l.append(x)
        mat.append(l)
    for i in range(len(l)):      
        print(mat[i][i])


def ques9():
    mat = []
    print("Please enter row wise element!")
    m = int(input('How many rows exist? : '))
    n = int(input("How many column exist?: "))
    for i in range(1,m+1):
        l = []
        print("This is row",i)
        for j in range(n):
            x = int(input("Enter element : "))
            l.append(x)
        mat.append(l)
    import random
    x = random.randrange(0,m)
    y = random.randrange(0,n)
    print(x,y)
    num_sup = mat[x][y]
    for i in range(len(mat)):
        for j in range(len(mat[i])):
            mat[i][j]=mat[i][j]*num_sup
    print(mat)

def ques10():
    import numpy as np
    mat1 = []
    print("Please enter row wise element!")
    m = int(input('How many rows exist? : '))
    n = int(input("How many column exist?: "))
    for i in range(1,m+1):
        l = []
        print("Matrix 1\n","This is row",i)
        for j in range(n):
            x = int(input("Enter element : "))
            l.append(x)
        mat1.append(l)
    mat2 = []
    print("Please enter row wise element!")
    m = int(input('How many rows exist? : '))
    n = int(input("How many column exist?: "))
    for i in range(1,m+1):
        l = []
        print("Matrix2\n","This is row",i)
        for j in range(n):
            x = int(input("Enter element : "))
            l.append(x)
        mat2.append(l)
    
    x = np.dot(mat1,mat2)
    print(x)

ques10()
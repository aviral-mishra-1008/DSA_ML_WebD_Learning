lst1=[]
x=int(input("how many internal list do you need?- "))
for i in range(x):
    j = list(input("press enter"))
    print()
    y = int(input("how many elements you want to add? - "))
    print()
    for k in range(y):
        print()
        print("enter num for entering number & sen for letters or sentences")
        print()
        c = input("Enter here: ")
        if c=="num":
            t = float(input('enter the value here - '))
            j.append(t)
        elif c=="sen":
            t =(input('enter the value here - '))
            j.append(t)
        else:
            print("Invalid Input")
    lst1.append(j)
print(lst1)
print()
print("Ok User, So now let's provide you more assistance")
print()
print("Welcome to PyLISTS")
print()
print("We have following options for you here - ","Below enter:","\n","Enter 0 to alter the contents of the list you created","\n","Enter 1 to search for a particular element in the list","\n","Enter 2 for no change")
print()
e = input("Enter your input as per menu - ")
if e=="0":
    print("In this option we have following functions -  ","Below enter:","\n","0 for adding new elements","\n","1 for adding element at desired index place within existing lists","\n","2 for deleting element/elements")
    print()
    d = input("Your input as per menu - ")
    if d=="0":
        print()
        print("The inputs you provide will get added after the existing elements")
        print()
        q = int(input("How many elements you want to add - "))
        print()
        qq = []
        for w in range(q):
            print("Enter num for numbers & sen for sentence")
            print()
            f = input("Enter here: ")
            if f=="num":
                r = float(input("Please enter the value: "))
            elif f=="sen":
                r = input("Enter you value here: ")
            else:
                print("Invalid input")
            qq.append(r)
        lst1.extend(qq)
    elif d=="1":
        yy = int(input("Enter the number of elements you want to add: "))
        print()
        print("Be careful while entering the index values as we'll ask you for the index value of the list in which you want to add element as well as the index place where you want to add the element within that list")
        print()
        print("For sake of simplicity, here's your list - ","\n",lst1)
        for tt in range(yy):
            I1 = int(input("Please specify the index value of the internal list which you want to edit"))
            I2 = int(input("Please specify the index value within the internal list where you wish to add your new element"))
            print("Enter num for number and sen for sentence or letters")
            ff = input("Enter here: ")
            if ff=="num":
                u = float(input("Enter the value - "))
                lst1[I1].insert(I2,u)
            elif ff=="sen":
                u = input("Enter the value - ")
                lst1[I1].insert(I2,u)
            else:
                print("Your Input Isn't Valid DUDE ;-/")
    elif d=="2":
        print("In this option we have following options","\n","Enter 0 for deleting any element in the list","\n","Enter 1 for deleting a particular index value","\n","Enter 2 to delete more than 1 elements")
        print()
        g = input("Enter your input as per menu: ")
        print()
        print("For sake of simplicity we're printing the list here, be careful in entering the index value (0 to n) for the internal list and the main element when asked")
        print()
        if g=="0":
            I1 = int(input('Please Enter the index value of internal list in which you want to delete an element - '))
            xx = input("If your element is number enter num and if it's a sentence or letter or word then enter sen - ")
            if xx=="num":
                tr = int(input("Enter the character - "))
            elif xx=="sen":
                tr = input("Enter the character - ")
            else:
                print("Wrong Input ;-/")
            lst1[I1].remove(tr)            
        elif g=="1":
            I1 = int(input("Please enter the index value of the internal list which you want to delete an element from - "))
            print()
            I2 = int(input("Please enter the index value of the element which you want to remove from that list - "))
            lst1[I1].pop(I2)
        elif g=="2":
            print("Be very careful in using this option as you'll need to specify conditions for each internal list one by one")
            print()
            re = int(input("The elements you want to remove are present in how many internal lists? - "))
            eq = 0
            print()
            print("Note - We'll go one by one each list, so every time it asks for enter, that means a new list")
            while eq<=re:
                I1 = int(input("The index value of the internal list you want to remove the elements from -  "))
                I2 = int(input("Please enter the index value of the first element you want to remove - "))
                I3 = int(input("Please enter the index value of the last element you want to remove - "))
                print('Note - all elements in between the 1st & last elements will be removed')
                del lst1[0][I2:I3]
                iiii = input("Press Enter")
elif e=="1":
    dd = sum(lst1,[])
    LL = ",".join(str(x) for x in dd)
    print("This is the temporary comparision sequence to make finding your desired element easire for you, it's a flattened single list and index values which will be provided to you in this mode will correspond to this list- ","\n",LL)
    print()
    Sa =(input("Please enter the element you're searching for - "))
    print('Desired element is at index value corresponding to - ',LL.find(Sa),"count , as well")
elif e=="2":
    print("Thanks for using PyLISTS!")
else:
    print("Thanks!")

print(lst1)
print("Thanks for using the program! Do visit again! :-)")
rrrrrrrrrrrr = input("press enter to exit")


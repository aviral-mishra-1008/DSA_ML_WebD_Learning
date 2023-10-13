import pickle
def entry():
    with open("C:\\Users\\Vatsal\\Desktop\\Python Files\\File Handling\\employee.dat","wb") as file:
        record = []
        while True:
            Id = int(input("Your ID - "))
            name = input("Your Name - ")
            income_quarter1 = int(input("Your income this month - "))
            commision = int(input("Your Commision - "))
            h = [Id,name,income_quarter1,commision]
            record.append(h)
            choice = input("You Need To Enter More Records? (yes/no) - ")
            if choice=="no":
                break
        pickle.dump(record,file)
    
def read():
    with open("C:\\Users\\Vatsal\\Desktop\\Python Files\\File Handling\\employee.dat","rb") as file:
        objec = pickle.load(file)
        for i in objec:
            print(i)

def search_specific_record():
    with open("C:\\Users\\Vatsal\\Desktop\\Python Files\\File Handling\\employee.dat","rb") as file:
        while True:
            objec = pickle.load(file)
            iD = int(input("Enter the id you want to fetch info - "))
            for i in objec:
                if i[0]==iD:
                    print(i)
                else:
                    pass
            choice = input("Want to search another instance (yes/no)- ")
            if choice=="no":
                break
            else:
                continue

def search_full_on():
    with open("C:\\Users\\Vatsal\\Desktop\\Python Files\\File Handling\\employee.dat","rb") as file:
        obj = pickle.load(file)
        search_num = int(input('Enter the number term you want to search for (enter no if n/a) - '))
        search = input('Enter the number term you want to search for (enter no if n/a) - ')
        for i in obj:
            for j in i:
                if search==j:
                    print(i)
                else:
                    pass

#entry()
# read()
# search_specific_record()
search_full_on()

    

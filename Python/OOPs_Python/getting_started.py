#creating class

class Employers:
    pass #this means we want to declare a class and not initialise it

#we can define the classes and then at will keep adding the data as instance variable

#but we can use to make a blueprint

class Employee:
    #using the init method we can initialise the class instances!
    def __init__(self, first, last, pay): #self means the current instance of class
        self.first = first
        self.last = last
        self.pay = pay
        self.email = first+'.'+last+'@company.com'
    #we can define methods to perform actions
    def fullName(self):
        return '{} {}'.format(self.first, self.last)


#Objects of classes
emp_1 = Employee('Aviral','Mishra','300000') #self gets passed automatically
emp_2 = Employee('Shobhita','Srivastava','360000')

#IN PYTHON WE CAN CALL METHODS BY USING CLASS NAME DIRECTLY
print(Employee.fullName(emp_2)) #we need to pass the instance here in this case



print(emp_1.email)
print(emp_2.email)
print(emp_1.fullName()) #paranthesis implies its a method!





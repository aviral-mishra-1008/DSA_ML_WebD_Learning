class Employee:
    def __init__(self, first, last, pay): #self means the current instance of class
        self.first = first
        self.last = last
        self.pay = pay
        self.email = first+'.'+last+'@company.com'


    def fullName(self):
        return '{} {}'.format(self.first, self.last)
    
    #class variables are like static variables and they are like global variables which can are inherited by all ojbects of the class with same value each time

    raise_amount = 1.04 #basically a class variable

    def apply_Raise(self):
        self.pay = int(self.pay * self.raise_amount) #we cannot access the class variable without using self denoting an instance of the class
    #At times we need to write the class methods, the regular methods take in the instance of class as the input and is denoted by self, but the class methods actually do not take in the self as an input type
    #rather they use the decorators
    
    @classmethod  #Basically telling the interpreter we need a class as an input
    def set_raise_amt(cls, amount): #by convention we use cls as keyword for class just like we used self for instance of class
        cls.raise_amount = amount

    #this helps in alternative constructor, suppose we need to input a string seperated by - and fetch/deploy values 
    @classmethod
    def from_string(cls, emp_str):
        first, last, pay = emp_str.split('-')
        cls.first = first
        cls.last  = last
        cls.pay = pay


    #now let's look at the static methods
    #the static methods do not pass anything as an instance, like class or self, they just don't pass and work like normal functions, they do however return things and have some logical conncetion
    
    @staticmethod #this decorator works!
    def is_workday(day):
        if day.weekday() == 5 or day.weekday()==6:
            return False
        return True
    #see we never accessed any instance or class in the method, this is static !



print(Employee.raise_amount, "  01")
Employee.set_raise_amt(1.05) #changes the value globally
print(Employee.raise_amount, "   02")
#we can run the class methods from instances as well but it makes no sense and any change made using that reflects everywhere

#We can use the class methods as alternative constructors!
#We can provide alternate way to create object rather than __init__
 
emp_1 = Employee('Aviral','Mishra','300000') #self gets passed automatically
new_emp_1 = Employee.from_string("Aviral-Mishra-900000") #using the classic things using the alternative constrcutor

#real time use is in the date-time module
import datetime #click on datetime and observe

my_date = datetime.date(2016,7,10)
print(Employee.is_workday(my_date)) #thus is workday worked here!


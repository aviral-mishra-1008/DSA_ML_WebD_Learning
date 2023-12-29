#enables us to inherit things from one class to other class as a hierarchy

class Employee:
    def __init__(self, first, last, pay): 
        self.first = first
        self.last = last
        self.pay = pay
        self.email = first+'.'+last+'@company.com'


    def fullName(self):
        return '{} {}'.format(self.first, self.last)
    

    raise_amount = 1.04 

    def apply_Raise(self):
        self.pay = int(self.pay * self.raise_amount) 


#say now we wish to create specific employee positions like managers and developers, they all will have al details of an employee so we can reuse the code by extending/inheritingthe blueprint from the employee class
#MAKING THE SUBCLASS 
        

#thus we inherited the employee class into developer class!
class Developer(Employee):
    raise_amount = 1.1 #this will update the raise_amount value
    #adding new attributes!
    #say adding the programming language
    def __init__(self, first, last, pay, prog_lang):
        super().__init__(first,last,pay) #this passes the first, last and pay to the parent class and let its constructor init handle it
        #Employee.__init__(self,first,last,pay) is another way to do so
        #the second method is more useful when we GO TO Multiple Inheritance

        self.prog_lang = prog_lang




#help function helps us a lot to tell details about the inheritance
# print(help(Developer))

#another subclass!
class Manager(Employee):
    #we were trying to assign a list of employees whom the manager superwises! So we never pass a list into the argument and basically avoid passing mutable datatypes directly rather use this none method
    def __init__(self,first,last,pay,employees=None): 
        super().__init__(first,last,pay) #this passes the first, last and pay to the parent class and let its constructor init handle it
        if employees is None:
            self.employees = [] 
        else:
            self.employees = employees

    def add_emp(self,emp):
        if emp not in self.employees:
            self.employees.append(emp)
    
    def remove_emp(self,emp):
        if emp in self.employees:
            self.employees.remove(emp)

    def print_emps(self):
        for emp in self.employees:
            print('-->', emp.fullName())

emp_1 = Employee('Aviral','Mishra',900000)
dev_1 = Developer('Ayushman',"Tiwari",950000,"C++")


mgr_1 = Manager('Narendra','Modi',1000000,[dev_1])
print(mgr_1.email)
mgr_1.add_emp(emp_1)
mgr_1.print_emps()
dev_1.apply_Raise()
print(dev_1.pay)



#We can check the instance 
print(isinstance(mgr_1, Manager)) #whether it is instance of a class
print(isinstance(mgr_1, Employee)) #True
print(isinstance(mgr_1,Developer)) #False!!

print(issubclass(Manager,Developer)) #if manager is a subclass of developer or not

##That's it!

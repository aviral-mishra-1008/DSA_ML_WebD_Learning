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
emp_1 = Employee('Aviral','Mishra','300000') #self gets passed automatically

print(Employee.raise_amount) #gives value!
print(emp_1.raise_amount) #So if I see the __dict__ of the emp1 I will not see raise amot because that thing is part of the class

print(emp_1.__dict__)
# now if Suppose I want the raise to be 5% for emp1 so I can do this
emp_1.raise_amount = 1.05
print(emp_1.__dict__) #now you'll see that raise_amount has become a part of the dict as in the thingy storing values

#So in this case, if we used self.raise_amount in the def apply_raise then it will use first the class raise_amount but if an object overrides the value then it uses that instances value
#If we end up using the Employee.raise_amount then the value stays unaffected until we update original raise amount



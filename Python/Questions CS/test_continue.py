import pickle
import os
'''
with open("C:\\Users\\Vatsal\\Desktop\\Python Files\\Questions CS\\linkin.dat","rb+") as  file1:
    stu1 = ['Name':'Kshitij',"Roll_no":23]
    pickle.dump(stu1,file1)
    pickle.load(file1)
print("Done")
'''

def bin_writo():
    record = open("C:\\Users\\Vatsal\\Desktop\\Python Files\\Questions CS\\linkin.dat", "wb+")
    h =[]
    num = int(input("how many people are there - "))
    for i in range(num):
        roll = int(input("Your roll no. - "))
        name = input('Your name - ')
        class_ = int(input("Your class - "))
        h.extend([roll,name,class_])
        pickle.dump(h, record)
    record.close()

def bin_reado():
    record = open("C:\\Users\\Vatsal\\Desktop\\Python Files\\Questions CS\\linkin.dat", "rb+")
    var = pickle.load(record)
    print(var)

def bin_deleto():
    record = open("C:\\Users\\Vatsal\\Desktop\\Python Files\\Questions CS\\linkin.dat", "rb+")
    temp = open("C:\\Users\\Vatsal\\Desktop\\Python Files\\Questions CS\\temp_linkin.dat", "wb+")
    var = pickle.load(record)
    deleto = input("Enter what you want to delete - ")
    h = []
    for i in var:
        if i!=deleto:
            h.append(i)
        else:
            pass
    pickle.dump(h,record)
    record.close()
    temp.close()

#bin_writo() 
bin_reado()       
bin_deleto()
bin_reado()
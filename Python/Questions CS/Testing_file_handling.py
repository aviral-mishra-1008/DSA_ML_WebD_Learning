#fs = open('C:\\Users\\Vatsal\\Desktop\\Python Files\\Questions CS\\Salesfile.txt','w+')
#rs = fs.readline()
#print(fs.readlines())
#d = fs.readlines()
#print(len(d),'bits')

'''fs.close()
ds = open('C:\\Users\\Vatsal\\Desktop\\Python Files\\Questions CS\\Testfile.txt','r+')
ds.write('avinash')
ds.flush()
d = ds.read()
print(d)
ds.close()
'''
#n = int(input("How many kids - "))
'''s = ["Name","\t","Q1 Sales","\t","Q2 Sales","\t","Q3 Sales","\t","Q4 Sales","\t","Remarks","\n"]
fs.writelines(s)
for i in range(4):
    h = []
    name = input("Your Name - ")
    Q1 = input("Q1 - ")
    Q2 = input("Q2 -")
    Q3 = input("Q3 - ")
    Q4 = input('Q4 - ')
    Rem = input('Remarks - ')
    h.extend([name,"\t",Q1,"\t",Q2,"\t",Q3,"\t",Q4,"\t",Rem])
    h.append('\n')
    fs.writelines(h)
fs.flush()
fs.close()'''
'''
'''
'''inp = input("Naam? - ")
b = fs.readlines()
analyse = " "
for i in range(len(b)):
    for j in b[i]:
        try:
            int(j)
        except:
            analyse = analyse+j
            if analyse==inp:
                print(fs.readlines(i))
            else:
                pass
'''
'''lst1 = fs.readlines()
h = []
for i in lst1:
    u = len(i)
    h.append(u)
print(sum(h))
print(fs.readline(),fs.readline())
fs.close()
#print(analyse)
#print(b)'''
ds = open("C:\\Users\\Vatsal\\Desktop\\Python Files\\Questions CS\\Salesfile.txt","r+")
k = ds.readlines
js = open("C:\\Users\\Vatsal\\Desktop\\Python Files\\Questions CS\\ExtraSalesfile.txt","w+")
for i in range(len(k)):
    analyse = " "
    for j in k[i]:
        try:
            if j!="\t":
                analyse = analyse+j
        except:
            pass
    if analyse =="Lakshya" or analyse=="Kashish":
        print(k[i])
ds.close()
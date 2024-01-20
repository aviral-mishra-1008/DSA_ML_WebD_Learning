import pandas as pd
import numpy as np
import matplotlib.pyplot as plt 
h = int(input("Enter Question number in range of 1 to 15: "))

#Question 1
if h==1:
    def fib(n):
        if n<=1:
            return n
        return fib(n-1) + fib(n-2)
    n = int(input("Please enter the number: "))
    for i in range(n):
        print(fib(i),end=',')


#Q2
elif h==2:
    s = input("Enter string: ")
    print(s[::-1])

#Q3
elif h==3:
    d = {}
    with open('Python\Assignments_Ai\input.txt') as file:
        x = file.readlines()
        for i in x:
            l = i.split()
            for j in l:
                if j in d.keys():
                    d[j]+=1
                else:
                    d[j] = 1
        maxi = 0
        word = ''
        for i in d.keys():
              if maxi<d[i]:
                  maxi = d[i]
                  word = ''
                  word = word+i
        print("The most used word is: ",word," and it comes ",maxi,' times!')

#Q4
elif h==4:
    def stdInp():
        n1 = int(input('Enter number 1: '))
        n2 = int(input('Enter number 2: '))
        try:
            ans = n1/n2
            print(ans)
        except ZeroDivisionError:
            print("Please enter the non zero divisor!")
            stdInp()
    stdInp()

#Q5
elif h==5:
    class BankAccount:
        def __init__(self,accountNumber, Balance, ownerName):
            self.accNum = accountNumber
            self.bal = Balance
            self.ownerName = ownerName
        
        def deposit(self,amt):
            print("Depositing......")
            self.bal = self.bal + amt
            print("Your Current Balance Is: ",self.bal)
        
        def cashWithdrawal(self,amt):
            print("Running......")
            self.bal = self.bal - amt
            print("Your Current Balance Is: ",self.bal)
       
        def accInfo(self):
            print("This account belongs to: ",self.ownerName)
            print("This account's number is: ",self.accNum)
            print("The Current Balance Is: ",self.bal)

#Q6
elif h==6:
    arr = [[0,0,0,0,0],
           [0,0,0,0,0],
           [0,0,0,0,0],
           [0,0,0,0,0],
           [0,0,0,0,0]]
    minRow = 0
    maxRow = 4
    minCol = 0
    maxCol = 4
    count = 1
    def spiral(arr,minRow,maxRow,minCol,maxCol,count):
        if(minCol==maxCol):
            arr[maxCol][maxCol]=count
            return
        for i in range(minCol,maxCol+1):
            arr[minRow][i] = count
            count+=1
        minRow+=1
        for j in range(minRow,maxRow+1):
            arr[j][maxCol] = count
            count+=1
        maxCol-=1
        for k in range(maxCol,minCol-1,-1):
            arr[maxRow][k] = count
            count+=1
        maxRow-=1
        for f in range(maxRow,minRow-1,-1):
            arr[f][minCol] = count
            count+=1
        minCol+=1
        spiral(arr,minRow,maxRow,minCol,maxCol,count)
    
    spiral(arr,minRow,maxRow,minCol,maxCol,count)
    arr = np.array(arr)
    print(type(arr),'\n')
    print(arr)

elif h==7:
    def swapMinMax(arr):
        maxInd = np.argmax(arr)
        minInd = np.argmin(arr)
        temp = arr[minInd]
        arr[minInd] = arr[maxInd]
        arr[maxInd] = temp
        print(arr)
    arr = [6,5,7,9]
    swapMinMax(arr)

elif h==8:
    def expMat(exp):
        expCoeff = []
        xFound = False
        yFound = False

        for i in range(len(exp)):
            if exp[i]=='x':
                try:
                    s = ''
                    if exp[i-2]=='-':
                        s=s+exp[i-2]+exp[i-1]
                    else:
                        s = exp[i-1]
                    n = int(s)
                    expCoeff.append(n)
                except:
                    if(exp[i-1])=='-':
                        expCoeff.append(-1)
                    else:
                        expCoeff.append(1)
            
                xFound=True
            
            elif exp[i]=='y':
                if xFound==False:
                    expCoeff.append(0)
                    xFound=True
                try:
                    s = ''
                    if exp[i-2]=='-':
                        s=s+exp[i-2]+exp[i-1]
                    else:
                        s = exp[i-1]
                    n = int(s)
                    expCoeff.append(n)
                except:
                    if(exp[i-1])=='-':
                        expCoeff.append(-1)
                    else:
                        expCoeff.append(1)
                yFound = True
                

            
            elif exp[i]=='=':
                if yFound==False:
                    expCoeff.append(0)
                    yFound=True
                expCoeff.append(int(exp[i+1]))
            
        return expCoeff

                
        
    exp1 = '2x+3y=7'
    exp2 = 'x-y=1'

    expCoef1 = expMat(exp1)
    expCoef2 = expMat(exp2)

    X = [expCoef1[0:2],expCoef2[0:2]]
    MatX = np.array(X)
    MatY = np.array([expCoef1[2],
                    expCoef2[2]])
    
    MatXinV = np.linalg.inv(MatX)

    MatAns = np.matmul(MatY,MatXinV)

    print("x = ",MatAns[0],' y = ',MatAns[1])

#Q9
elif h==9:
    RandomArr = np.random.normal(size=1000)
    plt.hist(RandomArr)
    plt.show()
    plt.close()


#Q10
elif h==10:
    arr = []
    count = 1
    for i in range(5):
        li = []
        for j in range(5):
            li.append(count)
            count+=1
        arr.append(li)
    arr = np.array(arr)
    arrFin = arr*arr #Broadcasting
    print(arrFin)

#Q11
elif h==11:
    df = pd.read_csv('Python\Assignments_Ai\input.csv')
    cols = df.columns
    df_means = df
    df_median = df
    df_mode = df

    for i in cols:
        mean = int(df[i].mean()) #Using only integer equivalents
        median = df[i].median()
        mode = df[i].mode()

        df_means[i].fillna(mean,inplace=True) #Inplace addition
        df_median[i].fillna(median,inplace=True)
        df_mode[i].fillna(mode,inplace=True)

    print("Mean Filling: \n",df_means)
    print()
    print("Median Filling: \n",df_median)
    print()
    print("Mode Filling: \n",df_mode)


#Q12
elif h==12:
    df = pd.read_csv('Python\Assignments_Ai\input.csv')
    cols = ['First','Second','Third']
    df.columns = cols
    for i in cols:
        mean = df[i].mean()
        std_dev = df[i].std()
        quar = df[i].quantile()  #Quartiles are a type of percentile. A percentile is a value with a certain percentage of the data falling below it. In general terms, k% of the data falls below the kth percentile
        print("For column named: ",i," Mean is: ",round(mean,2)," Standard Deviation is: ",round(std_dev,2)," Quartile is: ",round(quar,2))

elif h==13:
    df = pd.read_csv('Python\Assignments_Ai\input2.csv')
    print(df.columns)
    print("Sum Of Ages:\n")
    print(df.groupby('City').Age.sum())
    print("\nMean of Ages:\n")
    print(round(df.groupby('City').Age.mean(),2))

elif h==14:
    df1 = pd.read_csv("Python\Assignments_Ai\input2.csv")
    df2 = pd.read_csv("Python\Assignments_Ai\input3.csv")
    print("Before merge: \nDF1 is:\n",df1)
    df1=df1.merge(df2[df2.columns],on='City',how='right')
    print("Before merge: \nDF1 is:")
    print(df1)
    

elif h==15:
    df = pd.read_csv("Python\Assignments_Ai\input.csv")
    df.ffill(inplace=True)
    df.bfill(inplace=True)
    df.columns = ['Dijkstra','FloydWarshall','Minimax']
    x = df['Minimax']
    y = df['FloydWarshall']

    colors = np.random.rand(14)
    plt.xlabel = 'Minimax'
    plt.ylabel = 'FloydWarshal'
    plt.scatter(x,y,marker="D",c=colors)
    plt.show()
        

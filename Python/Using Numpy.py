for i in range (4):
    for j in range(4-i):
        print('#',end="")

    print()
nums=[1,208,34,1,442,33,451]
for num in nums:
    if num%5==0:
        print(num)
        break
else:
        print('directory non existent')


from array import *
vals = array('i',[3,23,23,56])



num = int(input())
for i in range (2,num):
    if num%i==0:
        print('Not Prime')
        break
else:
    print('prime')

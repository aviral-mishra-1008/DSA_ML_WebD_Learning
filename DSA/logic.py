num = int(input("Enter number: "))
num = num-2*num
i = 0
bina = 0
while num!=0:
    rem = num%2
    if rem==0:
        rem=1
    elif rem==1:
        rem=0
    num = num>>1
    bina = bina+10**i*rem
    i+=1
iny = "1"*(32-i)
bina =iny+str(bina)
for i in range(-1,-32,-1):
    if bina[i]=="1":
        bina.replace(bina[i],"0")
        print('yes')
    elif i=="0":
        bina.replace(bina[i],"1")
        break
    print(bina)
print(int(bina))


        

    
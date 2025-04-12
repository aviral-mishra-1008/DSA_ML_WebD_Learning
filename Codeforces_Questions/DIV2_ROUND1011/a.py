t = int(input(""))
while t>0:
    n,k = input("").split(" ")
    n = int(n)
    k = int(k)
    
    s = input("")
    
    if s[0]<s[n-1]:
        print("YES")
        continue
    
    if n==1 or k==0:
        print("NO")
        continue
    
    found = False
    
    for i in s[:n-1]:
        if i>s[n-1] or i<s[n-1]:
            print("YES")
            found = True
            break
    
    if not found:
        print("NO")
            
    t-=1
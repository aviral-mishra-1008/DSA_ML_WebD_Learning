def isPrime(n):
    if n<2:
        return False

    if n in [2,3]:
        return True

    if n%2==0:
        return False 
    
    for j in range(2,int(n**(0.5))+1):
        if n%j==0:
            return False
    return True

t = int(input())
for _ in range(t):
    x,k = input().split()

    x = int(x)
    k = int(k)

    if x==1 and k==2:
        print("YES")
        continue
    
    if k>1:
        print("NO")
        continue
    
    print("YES" if isPrime(x) else "NO")
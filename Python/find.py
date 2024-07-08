def findTheWinner(n, k):
    """
    :type n: int
    :type k: int
    :rtype: int
    """
    l = list(range(1,n+1))
    curr = 0
    while(len(l)>1):
        actualK = k%n
        rem = (curr+actualK-1)%len(l)
        l.pop(rem)
        print(rem, " -> ", l)
        curr = rem
    
    return l[0]
    
findTheWinner(5,2)
        
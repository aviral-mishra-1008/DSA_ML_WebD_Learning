'''
D = input("Likho to batayen - ")
h = ["E","I","O","U","a","e","i","o","u"]
# capital a is not vowel on this device ;-)
d = list(D)
for i in d:
    if i in h:
        d.remove(i)
F = "".join(d)
print(F[::-1])
'''
'''
lst = [1,2,3,4,5]
rt = lst*4
rt.sort(reverse=True)
print(rt)
'''
gatherer = 107,24,356,644,100
agriculturist = "russia"
'''
(q,w,e,r,t) = x
u = "aim"
print(q,w,r)
x = (q,w,e,r,t,u)
print(x)
print(type(x),type(r))
'''
n = int(input("Enter number - "))
l = []
if n in gatherer:
    for i in gatherer:
        if i==n:
            break
    else:
        l.append(1)
    h = sum(l)
    print("Index is - ",h+1)
else:
    print("invalid")

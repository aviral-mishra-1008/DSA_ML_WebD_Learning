import numpy as np
lis = [1,2,2,4,4,4]
counter = []
count = []
check = 0
for i in lis:
    if i in counter:
        continue
    else:
        counter.append(i)
        x = lis.count(i)
        if x in count:
            check = 1
            break
        else:
            count.append(x)

if check==0:
    return(True)

elif check==1:
    return(False)


# -*- coding: utf-8 -*-
#bubble sort

lst = [11,45,2,14,8,55,1,23,14]
for i in range(len(lst)):
    for j in range(len(lst)-1):
        f = lst[j]
        g = lst[j+1]
        if f>g:
            lst[j],lst[j+1] = lst[j+1],lst[j]
print(lst)

#insertion sort
lst = [45,11,2,14,8,55,1,23,14]
for i in range(len(lst)):
    for j in range(len(lst)-1):
        f = lst[j+1]
        g = lst[j]
        if g>f:
            h = []
            h.append(g)
            lst.remove(lst[j])
            lst.insert(j,h[0])
print(lst)
    
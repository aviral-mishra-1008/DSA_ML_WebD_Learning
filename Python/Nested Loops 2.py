g = input("Please enter here - ")
h = []
for i in g[::2]:
    m = i.upper()
    h.append(m)
j = []
for k in g[1::2]:
    j.append(k)
l = []

for r in range(len(h)):
    l.append(h[r])
    l.append(j[r-1])

ui = " ".join(l)
print(ui)

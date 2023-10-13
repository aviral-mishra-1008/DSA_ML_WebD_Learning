mahina = {"january":31,"february":28,"march":31,"april":30,"may":31,"june":30,"july":31,"august":31,"september":30,"otober":31,"november":30,"december":31}
mahinaa_stupeed = {"january":31,"february":29,"march":31,"april":30,"may":31,"june":30,"july":31,"august":31,"september":30,"october":31,"november":30,"december":31}
h = []
n = int(input("Please enter your year - "))
if n==0:
    print('There was no year called 0, please check your input!')
else: 
    if n%400==0:
        h.append(1)
    else:
        if n%100==0:
            h.append(0)
        else:
            if n%4==0:
                h.append(1)
            else:
                h.append(0)
a = sum(h)
b = input("Which Month - ")
c = []
if a==1:
    if b in mahinaa_stupeed:
        print(mahinaa_stupeed[b])
        t = list(mahinaa_stupeed.keys())
        t.sort()
        print(t)
        r = list(mahinaa_stupeed.values())
        print("Months with 31 days - ","January","March","May","July","august","October","December")
        tr = mahinaa_stupeed.items()
        g = list(tr)
        g.sort()
        print(g)
    else:
        print("You are stupeed, dammit I'm mad is still dammit I'm mad when read backwards!!!!")


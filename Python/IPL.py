import random
d = input("Player 1 enter team name - ")
l = input("Player 2 enter team name - ")

print()
print('Player 1 please tell us details of your team!')
print()
e = input('Enter Player Name - ')
ee = input('Enter Player Name - ')
eee = input('Enter Player Name - ')
eeee = input('Enter Player Name - ')
eeeee = input('Enter Player Name - ')
eeeeee = input('Enter Player Name - ')
eeeeeee = input('Enter Player Name - ')
eeeeeeee = input('Enter Player Name - ')
eeeeeeeee = input('Enter Player Name - ')
eeeeeeeeee = input('Enter Player Name - ') 
print()
print("Player 2 please tell us details of your team!")
e1 = input('Enter Player Name - ')
ee1 = input('Enter Player Name - ')
eee1 = input('Enter Player Name - ')
eeee1 = input('Enter Player Name - ')
eeeee1 = input('Enter Player Name - ')
eeeeee1 = input('Enter Player Name - ')
eeeeeee1 = input('Enter Player Name - ')
eeeeeeee1 = input('Enter Player Name - ')
eeeeeeeee1 = input('Enter Player Name - ')
eeeeeeeeee1 = input('Enter Player Name - ')
print()
print("Player 1 has first chance and second player has second chance and the same order will follow, each player will get 10 chances!")
y = [0]
g = input('Press enter')
x = random.randint(1,144)
print(e,'scored - ',x)
y.append(x)

z = [0]
o = input("Press enter")
u = random.randint(1,144)
print(e1," - ",u)
z.append(u)

g = input('Press enter for next chance')
x = random.randint(1,144)
print(ee,' - ',x)
y.append(x)

o = input("Press enter for next chance")
u = random.randint(1,144)
print(ee1,"scored - ",u)
z.append(u)

g = input('Press enter for next chance')
x = random.randint(1,144)
print(eee,'scored - ',x)
y.append(x)

o = input("Press enter for next chance")
u = random.randint(1,144)
print(eee1,"scored - ",u)
z.append(u)

g = input('Press enter for next chance')
x = random.randint(1,144)
print(eeee,'scored - ',x)
y.append(x)

o = input("Press enter for next chance")
u = random.randint(1,144)
print(eeee1,"scored - ",u)
z.append(u)

g = input('Press enter for next chance')
x = random.randint(1,144)
print(eeeee,'scored - ',x)
y.append(x)

o = input("Press enter for next chance")
u = random.randint(1,144)
print(eeeee1,"scored - ",u)
z.append(u)

g = input('Press enter for next chance')
x = random.randint(1,144)
print(eeeeee,'scored - ',x)
y.append(x)

o = input("Press enter for next chance")
u = random.randint(1,144)
print(eeeeee1,"scored - ",u)
z.append(u)

g = input('Press enter for next chance')
x = random.randint(1,144)
print(eeeeeee,'scored - ',x)
y.append(x)

o = input("Press enter for next chance")
u = random.randint(1,144)
print(eeeeeee1,"scored - ",u)
z.append(u)

g = input('Press enter for next chance')
x = random.randint(1,144)
print(eeeeeeee,'scored - ',x)
y.append(x)

o = input("Press enter for next chance")
u = random.randint(1,144)
print(eeeeeeee1,"- ",u)
z.append(u)

g = input('Press enter for next chance')
x = random.randint(1,144)
print(eeeeeeeee,'- ',x)
y.append(x)

o = input("Press enter for next chance")
u = random.randint(1,144)
print(eeeeeeeee1,"scored - ",u)
z.append(u)

g = input('Press enter for next chance')
x = random.randint(1,144)
print(eeeeeeeeee,'scored - ',x)
y.append(x)

o = input("Press enter for next chance")
u = random.randint(1,144)
print(eeeeeeeee1,"scored - ",u)
z.append(u)

print("Here are the results!")
m = sum(y)
n = sum(z)

print(d,"-",m,l,'-',n)

if m>n:
    print(d,"Wins!")
else:
    print(l, "Wins!")
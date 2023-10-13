print("Welcome! I'll give you treat!")
print('We have following food items for free today - ',"\n","Burger","\n","Samosa","\n","Kachodi","\n","Biryani & Mattha","\n","Chocolate Cake")
print()
B = int(input("How many burgers? - "))
S = int(input("How many Samosa? - "))
K = int(input("How many Kachodi? - "))
BM = int(input("How many plate biryani (one glass mattha per plate) - "))
C = int(input("How many chocolate cakes? - "))
for i in range(0,B):
    print("Your Burger is Here")
for i in range(0,S):
    print('Here is your samosa')
for i in range(0,K):
    print('Here is your Kachodi')
if B+S+K+BM+C<=10:
    for i in range(0,BM):
        print('Here is your Biryani & Mattha')
    for i in range(0,C):
        print("Here is your chocolate!")
else:
    print("Check your weight, you've consumed too much")
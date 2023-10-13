'''
Myfriends = {"Pratyush":"White Bearded Geek","Vikram":"Pirate","aryan":"Smart","Shaurya":"Funny","Rachana Ma'am":"Teacher :-/"}
My_friends = {90:[70],82:[63]}
print(Myfriends,"\n",My_friends)
'''

'''
names = ["aviral","pratyush","vikram"]
avira = {"class - ":"11-B","Marks -":"100%","Phone number - ":"8756732361"}
prta = {"class - ":"11-B","Marks -":"102% (scam)","Phone number - ":"8299181461"}
vkrm = {"class - ":"11-D","Marks -":"99.98%","Phone number - ":"6306692588"}
p = [avira,prta,vkrm]
vscredit_regedist = dict(zip(names,p))
print(vscredit_regedist)
'''
ind_xrt = {"Lucknow":["aqi is ",400],"Tirupati":["aqi is ",32],"Dispur Chhapra":["aqi is ",72],"Dwarka":["aqi is - ",45]}
c = input("Enter your city name - ")
v = ind_xrt.keys()
if c in v:
    print(ind_xrt[c])
    p = input("Enter aqi officer passcode - ")
    if p=="233rtq0":
        t = int(input("Enter 0 to edit the content and 1 to delete parts of the content - "))
        if t==0:
            cc = input("Enter the city name which you want to edit - ")
            print(ind_xrt[cc])
            print()
            f = int(input("enter the index where you want to make the edit - "))
            if f==0:
                g = input("Enter the new content - ")
                ind_xrt[cc][f] = g
                print(ind_xrt)
                print()
                print("changes successful!")
   
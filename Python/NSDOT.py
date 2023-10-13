chem_subj = {"CK":14,"Organic":43,"CoordC":17,"EC":15,"SC":8,"D&F":6}
phy_subj  = {"Semi":20,"Atoms":17,"Dual":14,"Wave_optics":14,"Ray_optics":26,"EM":9}

strength = []
mods = []
weak = []

choice = int(input("Which subject?\n1. Physics\n2. Chemistry - "))
if choice == 1:
    for i in range(6):
        subj = input("Chapter: ")
        point = int(input('1 for chapter is strength, 2 for moderate and 3 for weakness - '))
        if point==1:
            strength.append(phy_subj[subj])
        elif point==2:
            mods.append(phy_subj[subj])
        else:
            weak.append(phy_subj[subj])
elif choice == 2:
    for i in range(6):
        subj = input("Chapter: ")
        point = int(input('1 for chapter is strength, 2 for moderate and 3 for weakness - '))
        if point==1:
            strength.append(chem_subj[subj])
        elif point==2:
            mods.append(chem_subj[subj])
        else:
            weak.append(chem_subj[subj])
print('Your strengths make up: ',sum(strength),'\n','Your Moderates make up: ',sum(mods),'\n',"Your weaknesses make up: ",sum(weak),'\n')



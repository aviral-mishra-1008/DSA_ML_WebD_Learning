'''
#Q15 i
print("# "*7)
for i in range(11):
    print(" "*i,"#")
print("# "*7)

#15 ii
print("# "*7)
for i in range(11,0,-1):
    print(" "*i,"#")
print("# "*7)
'''
'''
#Bonus question
print("  "*2,"#"," "*2)
print(" ","#"," ","#"," ")
print("#"," ","#"," ","#")
print(" ","#"," ","#"," ")
print("  "*2,"#"," "*2)
'''
for i in range(1,7,2):
    for j in range(i):
        print("x",end="")
    print()


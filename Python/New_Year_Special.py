#<Doctype = "Python">
import random
x = 1
while x!= 0:
    Y = input("Please Tell Us Your Name - ")
    print("Now be ready to play a game")
    f = input("Press enter to continue!")
    G = ["You'll make a big application","You'll meet some new friend","You will get a pizza feast on or before 20th","Your year will be same as 2020","Better Luck Next Time","You'll visit Gujrat this year","You win a foreign trip ................. to nepal :-/",":-\ I won't tell you","You're the best person, you'll have a nice year","give me 20 dollars then I'll tell","Vikram I know you have entered this","You won't get vaccine this year better luck next time!"]
    J = random.randint(0,11)
    O = input("Please Describe Your Year 2020 in one word then I'll predict your 2021 (there will be equal chance of a true output or a joke, if you didn't like the output then consider it as a joke, no offence) -   ")
    print()
    print("Here's your output - ", G[J])
    print()
    print("Happy New Year, thanks for visiting!")
    print()
    x = int(input("Press 1 for another chance and 0 for exit - "))
import webbrowser
webbrowser.open("https://sites.google.com/view/spaceedgepro-cs")

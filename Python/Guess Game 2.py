from random import *
import random as rm
print('Following Modes Exist:','\n',"1 for Novice Mode","\n","2 for Moderate Mode","\n","3 for Pro Player Mode")
x = int(input('Enter the number specifying mode of game - '))
if x==1:
    print('Welcome to Novice Mode')
    print()
    print("In Novice Mode, your range of numbers is 0-2, you need to guess the number and if it matches with the number generated by the machine then the game will end!")
    print()
    print("You'll get 10 chances")
    i = 0
    while i<=10:
        c = int(input('Enter your guess number - '))
        d = randint(0,2)
        if c==d:
            print('You Guessed it right!')
            break
        else:
            print('Better Luck Next Time')
    i = i+1
else:
    if x==2:
        print('Welcome to Moderate Mode')
        print()
        print("In Moderate Mode, your range of numbers is 0-5, you need to guess the number and if it matches with the number generated by the machine then the game will end!")
        print()
        print("You'll get 10 chances")
        i = 0
        while i<=10:
            c = int(input('Enter your guess number - '))
            d = randint(0,5)
            if c==d:
                print('You guessed it right!')
                break
            else:
                print('Better Luck Next Time')
        i = i+1
    else:
        print('Welcome to Pro Player Mode')
        print()
        print("In Pro Player Mode, your range of numbers is 0-10, you need to guess the number and if it matches with the number generated by the machine then the game will end!")
        print()
        print("You'll get 10 chances")
        i = 0
        while i<=10:
            c = int(input('Enter your guess number - '))
            d = randint(0,10)
            if c==d:
                print('You guessed it right!')
                break
            else:
                print('Better Luck Next Time')
        i = i+1
print()
print("This game was developed by aviral mishra")
print()
print('Thanks For Using The game.')
f = input('Press any key to exit!')
    
        
        
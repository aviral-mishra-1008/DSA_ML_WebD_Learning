while True:
    Wght = int(input("Please enter your weight - ")) #taking up weight of user
    Wght_moon = int(Wght/6)   #evaluating weight on moon
    print("Your weight on moon would be - ", Wght_moon,"Kg")
    string_say = "Hiii, Your weight on moon would be, "+ str(Wght_moon)+"KG" #this will be said
    import pyttsx3
    friend = pyttsx3.init()  #initiating pyttsx3 engine
    friend.say(string_say) #this will be said
    friend.runAndWait()


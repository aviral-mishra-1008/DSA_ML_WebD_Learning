import random
import pyttsx3
i = 0
while i<=20:
    questions = ["Simran Ma'am - How was your fist day at CIS?", "Principal Ma'am - What is the best thing about our school?","Shilpi Ma'am - What was your best moment at CIS?", "Nishant Sir - What was the most funniest thing you did in the school", "Vikas Sir - Sir, if not chemistry and photography then what is your next favorite work?", "Ankur Sir - Your favorite teacher of school days?", 'Atul Sir - How was your childhood, share some funny memories, what are your opinions on iconic factory?',"Astha Ma'am - What do you like more - English or Hindi", "Kanchan Ma'am - What is your faorite doha from kabir?","Rachna Ma'am - Do you like this program?", "Anoop Sir - Sir aapko Naman,Kshitij,Aviral,Aryan,Aditya mein se sabse pasand kaun hai ;-)", "Say me hi then only I'll work!" ]
    x = (random.choice(questions))
    print(x)
    friend = pyttsx3.init()
    friend.say(x)
    friend.runAndWait()
    input('Press enter')
i = i+1



print('welcome to space edge pro')
print('We request you to fill the following form')
x=input('Your Name - ')
y=int(input('Your age - '))
z=int(input('Your Ph.No.- '))
u=input('your email address- ')
i=input('the city in which you live- ')

print('reply in yes & no - ')
j=input('are you interested in our mission - ')
m=input('would you like to contribute to the team- ')
print('enter 0 for no and 1 for yes ')
l=int(input('are you interested in joining team space edge pro - '))
if l==1:
    print('you should be <18 years old and interested in science, send your details on our email id - spaceedgepro2018@gmail.com')
else:
    print('no problem!')
import webbrowser
webbrowser.open("https://sites.google.com/view/spaceedgepro-ix")
print('thanks!')
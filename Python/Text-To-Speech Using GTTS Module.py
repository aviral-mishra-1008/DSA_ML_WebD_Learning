from gtts import gTTS

import os

my_text = input('Enter the text - ')
language = ''

output = gTTS(text = my_text, lang = language, slow = True)
output.save('Test.mp3')

os.system("start Test.mp3")

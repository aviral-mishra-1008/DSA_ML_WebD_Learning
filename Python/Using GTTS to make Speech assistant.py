from gtts import gTTS

import os

my_text = input('Enter the text - ')
language = 'en'

output = gTTS(text = my_text, lang = language, slow=False)
output.save('HBD.mp3')

os.system("start HBD.mp3")

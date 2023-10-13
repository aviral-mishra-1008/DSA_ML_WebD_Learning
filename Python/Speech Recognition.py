import speech_recognition as sr
r = sr.Recogniser()
x = input("")
with sr.AudioFile('x') as source:
    audio = r.listen(source)
    try:
        text = r.recognise_bing(audio)
        print(text)
    except:
        print("Run again")
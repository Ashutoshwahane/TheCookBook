import speech_recognition as sr
import pyttsx3 as py
import numpy
# import pygame as pg
engine = py.init('sapi5')
engine.say("Hi ,goldiee")
voices = engine.getProperty('voice')
engine.runAndWait()


r = sr.Recognizer()
pip install SpeechRecognitionwith sr.Microphone() as mic:
    print('Speak anything : ')
    audio = r.listen(mic)

    try:
        text = r.recognize_google(audio)
        print("you said : {} ".format(text))
    except:
        print("pardon")


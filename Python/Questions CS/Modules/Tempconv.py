#Tempconv.py
"""Used to convert various scales of temperatures"""

#Functions

def celcius_to_fah(x):
    """This function converts celcius to fahrenheit"""
    return((9*x)/5+32)  

def cel(y):
    """This function converts fahrenheit to celcius"""
    return((5*(y-32))/9)

#Constants
freezing_C = 0.0  #Freezing temperature of water (di_hydrogen oxide) in celcius
freezing_F = 32.0 #Freezing temperature of water(di_hydrogen oxide) in fahrenheit

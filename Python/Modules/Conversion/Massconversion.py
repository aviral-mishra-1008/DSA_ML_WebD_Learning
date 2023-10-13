''' This module converts the units of mass'''

#functions

def kgtotonne(mass):
    ''' To convert kg to tonnes'''
    return(mass/1000)

def tonnetokg(mass):
    ''' This converts tonne to kg'''
    return(mass*1000)

def kgtopound(mass):
    ''' Converts kg to pounds'''
    return(mass*2.20)

def poundtokg(mass):
    '''converts pounds to kg'''
    return(mass/2.20)

#Constants
weight_in_kg  = 1 #weight in kg
weight_in_tonne = 0.001 #equivalent weight in tonnes
weight_in_pound = 2.20 #equivalent weight in pound

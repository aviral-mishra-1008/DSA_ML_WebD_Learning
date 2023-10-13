''' This is unit converter for lengths, this module can convert various units including(km,m,inch,cm,mile,feet)''' 

#functions
def miletokm(x):
    '''Converts miles to km'''
    return(x*1.6)
def kmtomiles(y):
    ''' convert km to miles'''
    return(y/1.6)
def feettoinches(z):
    '''converts feet to inch'''
    return(z*12)
def inchestofeet(d):
    '''converts inches to feet'''
    return(d/12)

#constants
mile = "1.6 km"  #unit conversion used for km & miles
feet = "12 inches" #unit conversion used for feet & inch

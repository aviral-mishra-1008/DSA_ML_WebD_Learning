''' This is a random set of functions for implementing type C questions in class'''

#functions
def remove_letter(sentence,letter):
    '''this function takes a sentence and a letter as input and returns sentence with the letters removed'''
    a = letter[0]
    o = sentence.count(a)
    for i in range(o):
        u = sentence.split(a)
        u = "".join(u)
    return(u)

def Kapwords(string):
    '''This function capitalises each character of the string'''
    r = string.upper()
    print(r)


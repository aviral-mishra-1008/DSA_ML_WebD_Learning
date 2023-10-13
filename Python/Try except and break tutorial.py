while 1:   
    x = input('galat statement mat likhna- ')
    if x == 'exit':
        break  

    try:
        y = eval(x)
        if y: print(y)
    except:
        try:
            exec(x)
        except Exception as g:
            print('dekho user, mein python hun bicchu ya ajgar nahi, jo tum karna chah rhe ho wo mein ni karunga, jo karna hai kr lo!', g)


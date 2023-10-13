top = 0
def push(stack,element):
    stack.append(element)
    global top  
    top = top+1

def display(Stack):
    print('Your Stack is ')
    for i in Stack:
        print(i)
    print()
    print("It's beautiful!!")

def peek(stack,top):
    if len(stack)!=0:
        print(stack[top])
    else:
        print("No mountain so no peak -__-")

stck_books = []
for i in range(5):
    name = input("Enter book name - ")
    push(stck_books,name)
    print()
    peek(st)
display(stck_books)

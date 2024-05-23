import copy
import math

X = 'X'
O = 'O'
EMPTY = None

def initial_state():
    return[[EMPTY,EMPTY,EMPTY],
           [EMPTY,EMPTY,EMPTY],
           [EMPTY,EMPTY,EMPTY]]

def player(board):
    xC = 0
    oC = 0
    for i in range(3):
        for j in range(3):
            if(board[i][j]==X):
                xC+=1
            elif(board[i][j]==O):
                oC+=1
            else:
                nC+=1
    
    if(xC==oC):
        return X
    else:
        return O
    
def actions(board):
    moves = set()
    for i in range(3):
        for j in range(4):
            if(board[i][j]==EMPTY):
                moves.add((i,j))
            else:
                pass
    return moves

def result(board, action):
    newB = copy.deepcopy(board)
    allowedAction = actions(newB)

    if action in allowedAction:
        i,j = action
        plyer = player(board)
        newB[i][j] = plyer
        return newB
    
    else:
        raise Exception("Invalid move")

def checkWinner(boardRow):
    if(boardRow[0]==boardRow[1]==boardRow[2]):
        return True
    else:
        return False

def findWinner(array):
    return array[0]



def winner(board):

    #Returns the winner of the game, if there is one.

    #checking in the row
    winner_found = False
    for i in board:
        isRowWinner = checkWinner(i)
        if isRowWinner:
            winner_found = True
            return findWinner(i)


    #checking in the column
    for i in range(3):
        arr = []
        for j in range(3):
            arr.append(board[j][i])
        isColWinner = checkWinner(arr)
        if isColWinner:
            winner_found = True
            return findWinner(arr)

    #checking along diagonal
    diag = []

    diag1 = []
    for i in range(3):
        diag1.append(board[i][i])
    diag.append(diag1)

    diag2 = []
    for j in range(3):
        diag2.append(board[j][2-j])
    diag.append(diag2)

    for i in range(2):
        isDiagWinner = checkWinner(diag[i])
        if isDiagWinner:
            winner_found = True
            return findWinner(diag[i])

    if winner_found==False:
        return None
    
def terminal(board):
    #Returns True if game is over, False otherwise.
    value_check = winner(board)
    None_count = 0
    for i in range(3):
        for j in range(3):
            value = board[i][j]
            if value==None:
                None_count+=1

    if value_check!=None or None_count==0:
        return True
    else:
        return False

def utility(board):

    #Returns 1 if X has won the game, -1 if O has won, 0 otherwise.

    value_check = winner(board)
    if value_check==X:
        return 1
    elif value_check == O:
        return -1
    elif value_check == None:
        return 0

def maxVal(board):
    if terminal(board):
        return utility(board)
    gameVal = -2
    actionsAvailable = actions(board)
    for i in actionsAvailable:
        gameVal = max(gameVal,minVal(result((board,i))))

def mixVal(board):
    if terminal(board):
        return utility(board)
    gameVal = 2
    actionsAvailable = actions(board)
    for i in actionsAvailable:
        gameVal = min(gameVal,maxVal(result((board,i))))
    
def minimax(board):

    if terminal(board):
        return None
    
    playerNow = player(board)
    actionsAvailable = actions(board)

    if playerNow == X:
        trace = {}
        value = -2
        for act in actionsAvailable:
            valueCheck = value
            new_board = result(board,act)
            gameValue = minVal(new_board)
            value = max(value,gameValue)
            if value!=valueCheck:
                trace[value] = act
        return trace.get(value)

#Question1
import copy
class Node:
    def __init__(self,state,parent,action):
        self.state = state
        self.parent = parent 
        self.action = action


class StackFrontier():
    def __init__(self):
        self.frontier = []

    def add(self, node):
        self.frontier.append(node)

    def contains_state(self, state):
        return any(node.state == state for node in self.frontier)

    def empty(self):
        return len(self.frontier) == 0

    def remove(self):
        if self.empty():
            raise Exception("empty frontier")
        else:
            node = self.frontier[-1]
            self.frontier = self.frontier[:-1]
            return node

def findBlank(node):
    for i in range(3):
        if None in node.state[i]:
            ind = node.state[i].index(None)
            tup = (i,ind)
            return tup
        
def printSet(state):
    print(state[0])
    print(state[1])
    print(state[2])

def LegalMoves(node):
    legalMoves = []
    blank = findBlank(node)
    x,y = blank
    x1 = x-1 if x-1>=0 else None
    x2 = x+1 if x+1<3 else None
    y1 = y-1 if y-1>=0 else None
    y2 = y+1 if y+1<3 else None

    if(x1!=None):
        tup1 = (x1,y)
        legalMoves.append(tup1)
    if(x2!=None):
        tup2 = (x2,y)
        legalMoves.append(tup2)
    if(y1!=None):
        tup3 = (x,y1)
        legalMoves.append(tup3)
    if(y2!=None):
        tup4 = (x,y2)
        legalMoves.append(tup4)
    
    return legalMoves


def Result(node,action):
    nxtState = node.state
    xN,yN = action
    x,y = findBlank(node)
    temp = node.state[x][y]
    nxtState[x][y] = nxtState[xN][yN]
    nxtState[xN][yN] = temp
    newNode = Node(nxtState,node.state,action)
    return newNode

def WinFinder(node,goalState):
    currState = node.state
    goal = goalState.state
    for i in range(3):
        for j in range(3):
            if(currState[i][j]==goal[i][j]):
                continue
            else:
                return False
    return True



puzzle = [[1, 2, 3], 
          [4, None, 6], 
          [7, 5, 8]]
finalState = [[1,2,3],
              [4,5,6],
              [7,8,None]]

nodeI = Node(puzzle,None,None)
nodeF = Node(finalState,None,None)
found = False
Frontier = StackFrontier()
Frontier.add(nodeI)
exploredSet = []
solution = []

Frontier.add(nodeI)

def findSol(nodeI,nodeF,found,Frontier,solution,exploredSet):
    print('Input State: ')
    printSet(nodeI.state)
    if WinFinder(nodeI,nodeF):
        found = True
        while nodeI.parent!=None:
            solution.append(nodeI.parent)
            nodeI = nodeI.parent
        solution.reverse()
        solution.append(nodeI.state)
        print('Solution Acheived')
    
    if Frontier.empty():
        return
    
    while found!=True:
        node = Frontier.remove()
        state = copy.deepcopy(node.state)
        exploredSet.append(state)
        moves = LegalMoves(node)
        print('Available actions: ',moves)
        for i in moves:
            print('action applied: ',i)
            newNode = Result(node,i)
            print('Next Node formed is: ')
            printSet(newNode.state)
            stateNow = newNode.state
            if stateNow not in exploredSet:
                Frontier.add(newNode)
                print('now entering new recursion call')
                print()
                findSol(newNode,nodeF,found,Frontier,solution,exploredSet)

solprint = findSol(nodeI,nodeF,found,Frontier,solution,exploredSet)



#working:
import copy

def find_blank_tile(puzzle):
    """Finds the coordinates of the blank tile in the puzzle."""
    for i in range(3):
        for j in range(3):
            if puzzle[i][j] == 0:
                return i, j

def move_blank_tile(puzzle, direction):
    """Moves the blank tile in the specified direction."""
    i, j = find_blank_tile(puzzle)
    new_puzzle = copy.deepcopy(puzzle)
    if direction == "up" and i > 0:
        new_puzzle[i][j], new_puzzle[i - 1][j] = new_puzzle[i - 1][j], new_puzzle[i][j]
    elif direction == "down" and i < 2:
        new_puzzle[i][j], new_puzzle[i + 1][j] = new_puzzle[i + 1][j], new_puzzle[i][j]
    elif direction == "left" and j > 0:
        new_puzzle[i][j], new_puzzle[i][j - 1] = new_puzzle[i][j - 1], new_puzzle[i][j]
    elif direction == "right" and j < 2:
        new_puzzle[i][j], new_puzzle[i][j + 1] = new_puzzle[i][j + 1], new_puzzle[i][j]
    return new_puzzle

def dfs(puzzle, goal, moves, visited):
    """Performs Depth-First Search to find a solution path."""
    if puzzle == goal:
        moves.append(puzzle)
        return moves

    visited.add(tuple(map(tuple, puzzle)))  # Add current state to visited set

    for direction in ["up", "down", "left", "right"]:
        new_puzzle = move_blank_tile(puzzle, direction)
        if tuple(map(tuple, new_puzzle)) not in visited:
            moves.append(puzzle)
            result = dfs(new_puzzle, goal, moves, visited)
            if result:
                return result

    return None

def pRint(arr):
    print(arr[0])
    print(arr[1])
    print(arr[2])


def main():
    initial_state = [[1, 2, 3], 
                     [0, 5, 6], 
                     [4, 7, 8]]  # Example initial state
    goal_state = [[1, 2, 3], 
                  [4, 5, 6], 
                  [7, 8, 0]]  # Example goal state

    # Allow user to change initial and goal states if desired
    change_states = input("Do you want to change the initial and goal states? (y/n): ")
    if change_states == "y":
        initial_state = [[int(input("Enter tile {}: ".format(i*3 + j + 1))) for j in range(3)] for i in range(3)]
        goal_state = [[int(input("Enter goal tile {}: ".format(i*3 + j + 1))) for j in range(3)] for i in range(3)]

    solution = dfs(initial_state, goal_state, [], set())
    if solution:
        print("Solution path:")
        for i in solution:
            pRint(i)
            print()
    else:
        print("No solution found.")

if __name__ == "__main__":
    main()

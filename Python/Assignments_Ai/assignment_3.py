import copy

class Node():
    def __init__(self, state, parent, action, cost):
        self.state = state
        self.parent = parent
        self.action = action
        self.cost = cost

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


class QueueFrontier(StackFrontier):

    def remove(self):
        if self.empty():
            raise Exception("empty frontier")
        else:
            node = self.frontier[0]
            self.frontier = self.frontier[1:]
            return node


def pRint(arr):
    print(arr[0])
    print(arr[1])
    print(arr[2])

def find_blank_tile(puzzle):
    for i in range(3):
        for j in range(3):
            if puzzle[i][j] == 0:
                return i, j

def move_blank_tile(puzzle, direction):
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

#QUESTION 1
def Puzzledfs(puzzle,goal,found,visited):
    solution = []
    frontier = StackFrontier()
    nodeI = Node(puzzle,None,None,None)
    nodeF = Node(goal,None,None,None)
    frontier.add(nodeI)
    while found!=True:
        node = frontier.remove()
        directions = ['up','down','right','left']
        for i in directions:
            newPuzzle = move_blank_tile(node.state,i)
            newPuzzleNode = Node(newPuzzle,node,i,None)
            if newPuzzle == nodeF.state:
                found = True
                while newPuzzleNode.parent!=None:
                    solution.append(newPuzzleNode.state)
                    newPuzzleNode = newPuzzleNode.parent
                solution.append(puzzle)
                solution.reverse()
                print('Solution Found: ')
                for i in solution:
                    pRint(i)
                    print()
                break
            else:
                if tuple(map(tuple, newPuzzle)) not in visited:
                    visited.add(tuple(map(tuple, newPuzzle)))  
                    frontier.add(newPuzzleNode)

    
#QUESTION 2

def Puzzlebfs(puzzle,goal,found,visited):
    solution = []
    frontier = QueueFrontier()
    nodeI = Node(puzzle,None,None,None)
    nodeF = Node(goal,None,None,None)
    frontier.add(nodeI)
    while found!=True:
        node = frontier.remove()
        directions = ['up','down','right','left']
        for i in directions:
            newPuzzle = move_blank_tile(node.state,i)
            newPuzzleNode = Node(newPuzzle,node,i,None)
            if newPuzzle == nodeF.state:
                found = True
                while newPuzzleNode.parent!=None:
                    solution.append(newPuzzleNode.state)
                    newPuzzleNode = newPuzzleNode.parent
                solution.append(puzzle)
                solution.reverse()
                print('Solution Found: ')
                for i in solution:
                    pRint(i)
                    print()
                break
            else:
                if tuple(map(tuple, newPuzzle)) not in visited:
                    visited.add(tuple(map(tuple, newPuzzle)))  
                    frontier.add(newPuzzleNode)

#QUESTION 3
def uniformCostPuzzle(initial_state, goal_state):
    start_node = Node(state=initial_state,parent=None,action=None, cost=0)
    frontier = QueueFrontier()
    frontier.add(start_node)
    explored = set()
    move_costs = {"up": 1, "down": 1, "left": 1, "right": 1}

    while True:
        if frontier.empty():
            raise Exception("No solution exists")

        node = frontier.remove()

        if node.state == goal_state:
            path, cost = [], 0
            while node.parent is not None:
                path.append(node.state)
                cost += node.cost
                node = node.parent
            path.reverse()
            print('Cost Incurred: ',cost)
            print('Path Found Is: ')
            for i in path:
                pRint(i)
                print()

        explored.add(tuple(map(tuple, node.state)))

        for action in ["up", "down", "left", "right"]:
            new_state = move_blank_tile(node.state, action)
            if tuple(map(tuple, new_state)) not in explored and not frontier.contains_state(new_state):
                new_node = Node(state=new_state, parent=node, action=action, cost=move_costs[action])
                frontier.add(new_node)

#QUESTION 4


def expand_frontier(frontier, explored, node):
    for action in ["up", "down", "left", "right"]:
        new_state = move_blank_tile(node.state, action)
        if tuple(map(tuple, new_state)) not in explored:
            new_node = Node(state=new_state, parent=node, action=action, cost=None)
            frontier.append(new_node)
            explored.add(tuple(map(tuple, new_state)))

def get_path(node):
    path = []
    while node.parent:
        path.append(node.action)
        node = node.parent
    return path[::-1]

def bidirectionalPuzzle(initial_state, goal_state):
    start_node = Node(initial_state,None,None,None)
    goal_node = Node(goal_state,None,None,None)

    start_frontier = [start_node]
    goal_frontier = [goal_node]

    start_explored = set()
    goal_explored = set()

    while True:
        if not start_frontier or not goal_frontier:
            raise Exception("No solution exists")

        start_node = start_frontier.pop()
        goal_node = goal_frontier.pop()

        if start_node.state == goal_node.state:
            meeting_point = start_node.state
            path_start = get_path(start_node)
            path_goal = get_path(goal_node)
            print("Meeting Point is: ",meeting_point)
            print('Shortest Path is: ')
            for i in path_start+path_goal[::-1]:
                pRint(i)
                print()

        start_explored.add(tuple(map(tuple, start_node.state)))
        goal_explored.add(tuple(map(tuple, goal_node.state)))

        expand_frontier(start_frontier, start_explored, start_node)
        expand_frontier(goal_frontier, goal_explored, goal_node)




#QUESTION 5
def Puzzledls(puzzle,goal,found,visited):
    solution = []
    depth = int(input('Enter Max Depth: '))
    count = 0
    frontier = StackFrontier()
    nodeI = Node(puzzle,None,None,None)
    nodeF = Node(goal,None,None)
    frontier.add(nodeI)
    while found!=True:
        node = frontier.remove()
        if depth==count:
            print('Solution Cannot Be Obtained At Given Depth!')
            print('The State Reached So Far is: ')
            print()
            pRint(node.state)
            break
        count+=1
        directions = ['up','down','right','left']
        for i in directions:
            newPuzzle = move_blank_tile(node.state,i)
            newPuzzleNode = Node(newPuzzle,node,i,None)
            if newPuzzle == nodeF.state:
                found = True
                while newPuzzleNode.parent!=None:
                    solution.append(newPuzzleNode.state)
                    newPuzzleNode = newPuzzleNode.parent
                solution.append(puzzle)
                solution.reverse()
                print('Solution Found!'+' At Depth Of: ',count)
                for i in solution:
                    pRint(i)
                    print()
                break
            else:
                if tuple(map(tuple, newPuzzle)) not in visited:
                    visited.add(tuple(map(tuple, newPuzzle)))  
                    frontier.add(newPuzzleNode)
            

initial_state = [[6, 0, 8], 
                    [2, 3, 7], 
                    [4, 5, 1]] 
goal_state = [[1, 2, 3], 
                [4, 5, 6], 
                [7, 8, 0]]  

Puzzlebfs(initial_state,goal_state,False,set())
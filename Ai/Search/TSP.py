class Node:
    def __init__(self,state,parent,d):
        self.state = state
        self.parent = parent
        self.d = d


class StackFrontier:
    def __init__(self):
        self.frontier = []

    def add(self,node):
        self.frontier.append(node)
    
    def isEmpty(self):
        if(len(self.frontier)==0):
            return True
        else:
            return False
        
    def pop(self):
        if(len(self.frontier)==0):
            raise Exception("Stack Underflow")
        else:
            node = self.frontier[-1]
            self.frontier = self.frontier[:-1]
            return node
    def display(self):
        for i in self.frontier:
            print(i,',',end='')
        print()
        
class QueueFrontier(StackFrontier):
    def pop(self):
        if(len(self.frontier)==0):
            raise Exception("Queue Underflow")
        else:
            node = self.frontier[0]
            self.frontier = self.frontier[1:]
            return node
        
inf = float('inf')



def Tsp(adjMat,node,source,finList,visited,sumWeight,nodes):
        visited.append(node)
        frontier = StackFrontier()
        print(node,source,visited)
        count = 0
        for i in adjMat[node]:
            if count not in visited:
                if(i<inf):
                    frontier.add(count)
            count+=1
        if(len(visited)==4):
            sum = sumWeight + adjMat[node][source]
            finList[sum]  = visited
            print(finList)
        if frontier.isEmpty():
            visited.pop()
            return
        

        
        while(frontier.isEmpty()!=True):
            newNode = frontier.pop()
            frontier.display()
            sumWeight = sumWeight+adjMat[node][newNode]
            Tsp(adjMat,newNode,source,finList,visited,sumWeight,nodes)
    

adjMat = [
    [inf,1,5,3],
    [1,inf,2,2],
    [5,2,inf,1],
    [3,2,1,inf]
]
sumWeight = 0
visited = []
finList = {}
nodes = [0,1,2,3]
Tsp(adjMat,0,0,finList,visited,sumWeight,nodes)
for i in finList.keys():
    print("Cost of path is: ",i)
    print("The path is: ",end='')
    for j in finList[i]:
        print(j,"-->",end='')



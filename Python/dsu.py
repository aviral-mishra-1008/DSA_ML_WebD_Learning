class DisjointSet:
    def __init__(self, size, opt="rank"):
        self.ultimate_parents = list(range(size))
        if opt.lower() == 'size':
            self.size = [1] * size
        else:
            self.rank = [0]*size
    
    def find_parent(self, node):
        if self.ultimate_parents[node] != node:
            self.ultimate_parents[node] = self.find_parent(self.ultimate_parents[node])
        return self.ultimate_parents[node]
    
    def unionBy_rank(self, node1, node2):
        parent1 = self.find_parent(node1)
        parent2 = self.find_parent(node2)
    
        if parent1 == parent2:
            return  
    
        if self.rank[parent1] >= self.rank[parent2]:
            self.ultimate_parents[parent2] = parent1
            if self.rank[parent1] == self.rank[parent2]:
                self.rank[parent1] += 1
        else:
            self.ultimate_parents[parent1] = parent2
        
    def unionBy_size(self,node1,node2):
        parent1 = self.find_parent(node1)
        parent2 = self.find_parent(node2)

        if parent1==parent2:
            return
        
        if self.size[parent1]>=self.size[parent2]:
            self.ultimate_parents[parent2] = parent1
            self.size[parent1] += self.size[parent2]
        
        else:
            self.ultimate_parents[parent1] = parent2
            self.size[parent2] += self.size[parent1]
    
    def same_component(self, ele1, ele2): 
        return self.find_parent(ele1) == self.find_parent(ele2)
            

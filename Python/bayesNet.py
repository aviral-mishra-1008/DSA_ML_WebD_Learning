import random
# import networkx as nx
# import matplotlib.pyplot as plt

class Node:
    def __init__(self,parent,name,cpt,outcomes):
        self.parent = parent
        self.name = name
        self.cpt = cpt
        self.outcomes = outcomes

class Bayes:
    def __init__(self):
        self.bayesNet = list()

    
    def defineState(self,truthVals,name,parent,outcomes):
        N = Node(parent,name,truthVals,outcomes)
        self.bayesNet.append(N)


# G = nx.DiGraph()
# G.add_node('D', label='Difficulty')
# G.add_node('I', label='Intelligence')
# G.add_node('G', label='Grade')
# G.add_edge('D', 'G')
# G.add_edge('D', 'I')
# G.add_edge('I', 'G')
# pos = {'D': (0, 0), 'I': (1, 1), 'G': (2, 0)}
# nx.draw(G, pos, with_labels=True, node_size=1000, node_color='skyblue', font_size=10)
# plt.title("Bayesian Network")
# plt.show()

def mapE(evidance,name):
    if name == 'G':
        gD = {'A':0,'B':1,'C':2}
        return gD[evidance]
    
    elif name == 'D':
        gD = {'H':0,'L':1}
        return gD[evidance]
    
    elif name == 'I':
        gD = {'G':0,'P':1}
        return gD[evidance]


diffCPT = {('H',):[0.4],('E',):[0.6]}  #(hard,easy)
intelliCPT = {('G',):[0.7],('P',):[0.3]}  #(high,low)
gradeCPT = {
    ('H','G'):[0.5,0.3,0.2],  # Difficulty Intelligence (A,B,C)
    ('H','P'):[0.1,0.5,0.4],  #     H          G          ''
    ('E','G'):[0.7,0.2,0.1],  #     H          P          ''
    ('E','P'):[0.2,0.6,0.2]   #     E          G          ''
}                             #     E          P          ''
  
BayesNet = Bayes()
BayesNet.defineState(diffCPT,'D',None,['H','E'])
BayesNet.defineState(intelliCPT,'I',None,['G','P'])
BayesNet.defineState(gradeCPT,'G',['D','I'],['A','B','C'])

samples = []
numSamples = 10000

q = input("Enter query variable: ")
evids = []
evidence = int(input("How many evidence you provide: "))

for i in range(evidence):
    x = input("Enter the evidence variables: ")
    evids.append(x)

QueryNode = None
for j in BayesNet.bayesNet:
    if q in j.outcomes:
        QueryNode = j
        break

EvidenceNodes = []
for j in evids:
    for k in BayesNet.bayesNet:
        if j in k.outcomes:
            EvidenceNodes.append(k)

hiddenNodes = []

for j in BayesNet.bayesNet:
    if j not in EvidenceNodes or j!=QueryNode:
        hiddenNodes.append(j)

topo = {'D':0,'I':1,'G':2}

for i in range(numSamples):
    li = tuple()
    done = []
    w = 1
    for j in BayesNet.bayesNet:
        if j in EvidenceNodes:
            parent = j.parent
            if(parent==None):
                ind = EvidenceNodes.index(j)
                evidVar = evids[ind]
                cptVal = j.cpt[(evidVar,)][0]
                w = w*cptVal
                li = li + (evidVar,)
                done.append(j.name)
            else:
                parEvid = tuple()
                ind = EvidenceNodes.index(j)
                evidVar = evids[ind]
                for k in parent:
                    parEvid = parEvid + (li[topo[k]],)
                cptVal = j.cpt[parEvid][mapE(evidVar,j.name)]
                done.append(j.name)
                li = li + (evidVar,)
                w = w*cptVal
        
        else:
            parent = j.parent
            if parent==None:
                keys = list(j.cpt.keys())
                key = random.choice(keys)[0]
                li = li + (key,)
            
            else:
                op = j.outcomes
                choice = random.choice(op)
                li = li + (choice,)
    li = li + (w,)
    samples.append(li)


weights = 0
net = 0
checker = topo[QueryNode.name]
for j in samples :
    if j[checker] == q:
        weights+=j[-1]
    net+=j[-1]

prob = weights/net
print(f"Probability of {q} given evidence {evids} is: ",prob)


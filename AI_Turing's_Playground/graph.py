import matplotlib
matplotlib.use('Qt5Agg') 
import networkx as nx
import matplotlib.pyplot as plt

graph = {
    'Memphis': {'Thebes': 95, 'Abydos': 130},
    'Thebes': {'Memphis': 95, 'Aswan': 110, 'Abydos': 60},
    'Abydos': {'Memphis': 130, 'Thebes': 60, 'Alexandria': 210, 'Giza': 80},
    'Aswan': {'Thebes': 110, 'Alexandria': 280},
    'Alexandria': {'Abydos': 210, 'Aswan': 280, 'Giza': 150},
    'Giza': {'Abydos': 80, 'Alexandria': 150}
}

G = nx.Graph()
for city, connections in graph.items():
    for connected_city, distance in connections.items():
        G.add_edge(city, connected_city, weight=distance)

pos = nx.spring_layout(G)  
nx.draw(G, pos, with_labels=True, node_color='skyblue', node_size=2000, font_size=10, font_weight='bold')
labels = nx.get_edge_attributes(G, 'weight')
nx.draw_networkx_edge_labels(G, pos, edge_labels=labels)

plt.title('Ancient Egyptian Cities Graph')
plt.show()

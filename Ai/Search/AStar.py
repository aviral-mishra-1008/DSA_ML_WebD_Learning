import heapq

class Node:
    def __init__(self, state, g_value, h_value):
        self.state = state
        self.g_value = g_value
        self.h_value = h_value
        self.f_value = g_value + h_value

    def __lt__(self, other):
        return self.f_value < other.f_value

def astar(graph, start, goal, heuristic):
    open_set = [Node(start, 0, heuristic[start])]
    closed_set = set()

    while open_set:
        current_node = heapq.heappop(open_set)

        if current_node.state == goal:
            return reconstruct_path(current_node)

        closed_set.add(current_node.state)

        for neighbor, cost in graph[current_node.state]:
            if neighbor in closed_set:
                continue

            g_value = current_node.g_value + cost
            h_value = heuristic[neighbor]
            f_value = g_value + h_value

            neighbor_node = Node(neighbor, g_value, h_value)

            if neighbor_node not in open_set:
                heapq.heappush(open_set, neighbor_node)

    return None  # If no path is found

def reconstruct_path(node):
    path = [node.state]

    while node.parent:
        node = node.parent
        path.append(node.state)

    return list(reversed(path))

# Example usage
graph = {
    'A': [('B', 5), ('C', 3)],
    'B': [('D', 7)],
    'C': [('D', 2)],
    'D': [('E', 1)],
    'E': []
}

heuristic_values = {
    'A': 4,
    'B': 2,
    'C': 3,
    'D': 1,
    'E': 0
}

start_node = 'A'
goal_node = 'E'

path = astar(graph, start_node, goal_node, heuristic_values)

if path:
    print(f"Shortest path from {start_node} to {goal_node}: {path}")
else:
    print(f"No path found from {start_node} to {goal_node}")

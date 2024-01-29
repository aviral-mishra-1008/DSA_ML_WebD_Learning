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

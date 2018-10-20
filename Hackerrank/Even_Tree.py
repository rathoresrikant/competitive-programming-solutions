visited = []
edges = [[]]

# Recursive function for DFS
def nodeCountDFS(start) :
    global edges, visited
    if len(edges[start]) == 0 :
        return 1
    count = 1
    for node in edges[start] :
        if not visited[node] :
            visited[node] = True
            count += nodeCountDFS(node)
    return count

# Return node number in forest using DFS
def nodeCount(start, exclude) :
    global edges, visited
    visited = [False for i in range (len(edges))]
    visited[exclude] = True
    visited[start] = True
    count = 1
    for node in edges[start] :
        if not visited[node] :
            visited[node] = True
            count += nodeCountDFS(node)
    return count

# Print result
def evenForest(t_nodes, t_edges, t_from, t_to):
    global edges
    remove_count = 0
    # edges contains adjacent nodes of each node
    edges = [[] for i in range (t_nodes)]
    for index in range (t_edges) :
        edges[t_from[index]-1].append(t_to[index]-1)
        edges[t_to[index]-1].append(t_from[index]-1)
    # For each edge, check if both sides of the edge have even node
    # If yes, cut that edge and increase remove_count by 1
    for index in range (t_edges) :
        count_a = nodeCount(t_from[index]-1, t_to[index]-1)
        count_b = nodeCount(t_to[index]-1, t_from[index]-1)
        if count_a % 2 == 0 and count_b % 2 == 0 :
            remove_count += 1
            edges[t_from[index]-1].remove(t_to[index]-1)
            edges[t_to[index]-1].remove(t_from[index]-1)
    print(remove_count)

# Receive input
t_nodes, t_edges = [int(e) for e in input().split()]
t_from = []; t_to = []
for i in range (t_edges) :
    a, b = [int(e) for e in input().split()]
    t_from.append(a)
    t_to.append(b)
# Call function
evenForest(t_nodes, t_edges, t_from, t_to)

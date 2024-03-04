#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
#include <queue>

int shortestPath(std::vector<std::vector<int>> &graph, int start, int end)
{
    std::unordered_set<int> visited;
    std::queue<std::pair<int, int>> q;
    q.push({start, 0});

    while (!q.empty())
    {
        int node = q.front().first;
        int distance = q.front().second;
        q.pop();

        if (node == end)
        {
            return distance;
        }

        if (visited.find(node) == visited.end())
        {
            visited.insert(node);

            for (auto it = graph[node].begin(); it != graph[node].end(); ++it)
            {
                q.push({*it, distance + 1});
            }
        }
    }

    return 0;
}
int main()
{
    std::vector<std::vector<int>> graph; 
    graph = {{1, 2, 3}, {4}, {4, 5}, {2}, {}, {6}, {}, {6, 8}, {}};
    
    int test1 = shortestPath(graph, 0, 0); 
    int test2 = shortestPath(graph, 0, 1);
    int test3 = shortestPath(graph, 0, 3); 
    int test4 = shortestPath(graph, 0, 6); 
    
    
    std::cout << test1 << " " << test2 << " " << test3 << " " << test4; 

    return 0;
}
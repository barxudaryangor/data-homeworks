#include <iostream>
#include <vector>

using namespace std;

enum Color {
    WHITE,
    GRAY,
    BLACK
};

bool dfsHasCycle(int node, vector<vector<int>>& graph, vector<Color>& colors) {
    colors[node] = GRAY;

    for (int i = 0; i < graph[node].size(); ++i) {
        int neighbor = graph[node][i];

        if (colors[neighbor] == GRAY) {
            return true;
        } else if (colors[neighbor] == WHITE && dfsHasCycle(neighbor, graph, colors)) {
            return true;
        }
    }

    colors[node] = BLACK;
    return false;
}

bool hasCycles(vector<vector<int>>& graph) {
    int numNodes = graph.size();
    vector<Color> colors(numNodes, WHITE);

    for (int i = 0; i < numNodes; ++i) {
        if (colors[i] == WHITE && dfsHasCycle(i, graph, colors)) {
            return true;
        }
    }

    return false;
}

int main() 
{
    std::vector<std::vector<int>> graph = {{1, 2, 3}, {4}, {4, 5}, {2}, {}, {6}, {}, {6, 8}, {}};
    std::cout << hasCycles(graph) << std::endl;
    
    
    std::vector<std::vector<int>> graph2 = {{1},{2},{3},{0}};
    std::cout <<  hasCycles(graph2) << std::endl;
    
    std::vector<std::vector<int>> graph3 = {{1, 2, 3}, {4}, {4, 5}, {2}, {0}, {6}, {}, {6, 8}, {}};
    std::cout << hasCycles(graph3) << std::endl;
    
    std::vector<std::vector<int>> graph4 = {{1},{2},{3},{}};
    std::cout <<  hasCycles(graph4) << std::endl;
    

    return 0;
}

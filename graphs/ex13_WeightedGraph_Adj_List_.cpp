
#include <iostream>
#include <vector>
using namespace std;
void addWeightedEdge(std::vector<std::vector<pair<int, int>>>& adjList, int u, int
v, int weight=1)
{
adjList[u].push_back({ v, weight });
adjList[v].push_back({ u, weight });
}
int main() {
int nodes = 5;
vector<vector<pair<int, int>>> adjList(nodes);
addWeightedEdge(adjList, 0, 1, 4);
addWeightedEdge(adjList, 0, 4, 2);
addWeightedEdge(adjList, 1, 2, 3);
addWeightedEdge(adjList, 2, 3, 5);
addWeightedEdge(adjList, 3, 4, 1);
// Print weighted adjacency list
for (int i = 0; i < nodes; i++) {
cout << "Node " << i << " connects to: ";
for (auto neighbor : adjList[i]) {
cout << "(" << neighbor.first << ", weight " << neighbor.second << ")
";
}
cout << endl;
}
return 0;
}

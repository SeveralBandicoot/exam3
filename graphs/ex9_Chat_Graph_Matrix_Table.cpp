
#include <iostream>
#include <vector>
using namespace std;
void addEdge(vector<vector<int>>& adjMatrix, int u, int v, int weight = 1) {
adjMatrix[u][v] = weight;
// For undirected graph, add both directions
adjMatrix[v][u] = weight;
}
int main() {
int nodes = 5;
vector<vector<int>> adjMatrix(nodes, vector<int>(nodes, 0));
addEdge(adjMatrix, 0, 1);
addEdge(adjMatrix, 0, 4, 2);
addEdge(adjMatrix, 1, 2);
addEdge(adjMatrix, 2, 3);
addEdge(adjMatrix, 3, 4);
// Print adjacency matrix
for (int i = 0; i < nodes; i++) {
for (int j = 0; j < nodes; j++) {
cout << adjMatrix[i][j] << " ";
}
cout << endl;
}
return 0;
}

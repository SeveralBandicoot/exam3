#include <iostream>
• #include <vector>
• using namespace std;
• void addEdge(vector<vector<int>>& adjList, int u, int v) {
• adjList[u].push_back(v);
• // For undirected graph, add both directions
• adjList[v].push_back(u);
• }
• int main() {
• int nodes = 5;
• vector<vector<int>> adjList(nodes);
• addEdge(adjList, 0, 1);
• addEdge(adjList, 0, 4);
• addEdge(adjList, 1, 2);
• addEdge(adjList, 2, 3);
• addEdge(adjList, 3, 4);
• // Print adjacency list
• for (int i = 0; i < nodes; i++) {
• cout << "Node " << i << " connects to: ";
• for (int neighbor : adjList[i]) {
• cout << neighbor << " ";
• }
• cout << endl;
• }
• return 0;
• }

#include <vector>
• #include <queue>
• using namespace std;
• void addEdge(vector<vector<int>>& adjList, int u, int v) {
• adjList[u].push_back(v);
• // For undirected graph, add both directions
• adjList[v].push_back(u);
• }
• void BFS(int startNode, vector<vector<int>>& adjList, vector<bool>& visited) {
• queue<int> q;
• q.push(startNode);
• visited[startNode] = true;
• while (!q.empty()) {
• int node = q.front();
• q.pop();
• cout << node << " ";
• for (int neighbor : adjList[node]) {
• if (!visited[neighbor]) {
• visited[neighbor] = true;
• q.push(neighbor);
• }
• }
• }
• }
• int main() {
• int nodes = 5;
• vector<vector<int>> adjList(nodes);
• vector<bool> visited(nodes, false);
• addEdge(adjList, 0, 1);
• addEdge(adjList, 0, 4);
• addEdge(adjList, 1, 2);
• addEdge(adjList, 2, 3);
• addEdge(adjList, 3, 4);
• cout << "BFS Traversal: ";
• BFS(0, adjList, visited);
• cout << endl;
• return 0;
•
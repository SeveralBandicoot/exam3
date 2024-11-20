int main() {
Graph graph(4); // Create a graph with 5 vertices
graph.addEdge(0, 1);
graph.addEdge(0, 2);
// graph.addEdge(1, 0);
graph.addEdge(1, 2);
graph.addEdge(1, 3);
// graph.addEdge(2, 0);
// graph.addEdge(2, 1);
// graph.addEdge(3, 1);
std::cout << "Graph Representation:" << std::endl;
graph.printGraph();
return 0;
}
#include <iostream>
#include <vector>
class Graph {
private:
int numVertices;
std::vector<std::vector<int>> adjacencyList;
public:
Graph(int vertices) : numVertices(vertices) {
adjacencyList.resize(vertices);
}
void addEdge(int source, int destination) {
adjacencyList[source].push_back(destination);
adjacencyList[destination].push_back(source); // For an undirected graph, add in both directions
}
void printGraph() {
for (int i = 0; i < numVertices; ++i) {
std::cout << "Vertex " << i << ": ";
for (int neighbor : adjacencyList[i]) {
std::cout << neighbor << " ";
}
std::cout << std::endl;
} }
};

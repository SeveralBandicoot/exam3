
Page
1
of 2
// zWeek 13 Graphs.cpp : This file contains the 'main' function. Program execution
begins and ends there.
//
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
adjacencyList[destination].push_back(source); // For an undirected graph,
add edges in both directions
}
void printGraph() {
for (int i = 0; i < numVertices; ++i) {
std::cout << "Vertex " << i << ": ";
for (int neighbor : adjacencyList[i]) {
std::cout << neighbor << " ";
}
std::cout << std::endl;
}
}
};
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
std::cout << "Adjacency List Representation:" << std::endl;
graph.printGraph();
return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// Tips for Getting Started:
// 1. Use the Solution Explorer window to add/manage files
// 2. Use the Team Explorer window to connect to source control
// 3. Use the Output window to see build output and other messages
// 4. Use the Error List window to view errors
// 5. Go to Project > Add New Item to create new code files, or Project > Add
Existing Item to add existing code files to the project
// 6. In the future, to open this project again, go to File > Open > Project and
select the .sln file
// 3. Use the Output window to see build output and other messages
// 4. Use the Error List window to view errors
// 5. Go to Project > Add New Item to create new code files, or Project > Add
Existing Item to add existing code files to the project
// 6. In the future, to open this project again, go to File > Open > Project and
select the .sln file

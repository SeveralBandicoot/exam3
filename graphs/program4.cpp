• class Graph {
• private:
• int numVertices;
• std::vector<std::vector<int>> adjacencyList;
• public:
• Graph(int vertices) : numVertices(vertices) {
• adjacencyList.resize(vertices);
• }
• void addEdge(int source, int destination) {
• adjacencyList[source].push_back(destination);
• adjacencyList[destination].push_back(source);
• }
• void printGraph() {
• for (int i = 0; i < numVertices; ++i) {
• std::cout << "Vertex " << i << ": ";
• for (int neighbor : adjacencyList[i]) {
• std::cout << neighbor << " ";
• }
• std::cout << std::endl;
• }
• }
• };
• int main() {
• Graph graph(5); // Create a graph with 5 vertices
• graph.addEdge(0, 1);
• graph.addEdge(0, 4);
• graph.addEdge(1, 2);
• graph.addEdge(1, 3);
• graph.addEdge(1, 4);
• graph.addEdge(2, 3);
• graph.addEdge(3, 4);
• std::cout << "Adjacency List Representation:" << std::endl;
• graph.printGraph();

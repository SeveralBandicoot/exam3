class Node {
• public:
• //Write a class or struct Node with an int as data and a left and right pointer.
• int data;
• Node* left;
• Node* right;
•
• Node(int value) : data(value), left(nullptr), right(nullptr) {}
• //Create a Method that will create a new node assign the transferred # to data and create 2 new links (left and right)
• static Node* createNode(int value) {
• Node* newNode = new Node(value);
• return newNode;
• }
• };
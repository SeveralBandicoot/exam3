#include <iostream>
• #include<unordered_map>
• #include<list>
• #include<string>
• using namespace std;
• int main()
• {
• std::cout << "Maps \n";
• cout << "\nAdjacency List Char Example \n" << endl;
• unordered_map<string,list<char>> nodes;
• list<char> edge1{ 'c','b'};
• list<char> edge2{ 'a','d','e'};
• list<char> edge3{ 'a'};
• list<char> edge4{ 'b','f' };
• list<char> edge5{ 'b' };
• list<char> edge6{ 'b'};
• nodes.insert(pair<string, list<char>>("A", edge1));
• nodes.insert(pair<string, list<char>>("B", edge2));
• nodes.insert(pair<string, list<char>>("C", edge3));
• nodes.insert(pair<string, list<char>>("D", edge4));
• nodes.insert(pair<string, list<char>>("E", edge5));
• nodes.insert(pair<string, list<char>>("F", edge6));
• for (auto pb : nodes)
• {
• cout << "\n" << pb.first << " ";
• // Note the Nested Loop for the List
• for (auto sec : pb.second)
• {
• cout << sec << " ";
• }
• }
• cout << "\n\n";


// zWeek_10_Maps.cpp : This file contains the 'main' function. Program execution
begins and ends there.
//
#include <iostream>
#include<unordered_map>
#include<list>
#include<string>
using namespace std;
int main()
{
std::cout << "Maps \n";
cout << "\nAdjacency List Char Example \n" << endl;
unordered_map<string,list<char>> nodes;
list<char> edge1{ 'c','b'};
list<char> edge2{ 'a','d','e'};
list<char> edge3{ 'a'};
list<char> edge4{ 'b','f' };
list<char> edge5{ 'b' };
list<char> edge6{ 'b'};
nodes.insert(pair<string, list<char>>("A", edge1));
nodes.insert(pair<string, list<char>>("B", edge2));
nodes.insert(pair<string, list<char>>("C", edge3));
nodes.insert(pair<string, list<char>>("D", edge4));
nodes.insert(pair<string, list<char>>("E", edge5));
nodes.insert(pair<string, list<char>>("F", edge6));
for (auto pb : nodes)
{
cout << "\n" << pb.first << " ";
// Note the Nested Loop for the List
for (auto sec : pb.second)
{
cout << sec << " ";
}
}
cout << "\n\n";
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

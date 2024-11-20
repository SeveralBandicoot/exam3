
// zWeek_10_Maps.cpp : This file contains the 'main' function. Program execution
begins and ends there.
//
#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main()
{
std::cout << "Maps \n";
cout << "\nAdjacency List \n" << endl;
unordered_map<string, list<int>> nodes;
list<int> number1{ 1,2};
list<int> number2{ 0,2,3 };
list<int> number3{ 0,1 };
list<int> number4{ 1 };
nodes.insert(pair<string, list<int>>("zero", number1));
nodes.insert(pair<string, list<int>>("one", number2));
nodes.insert(pair<string, list<int>>("two", number3));
nodes.insert(pair<string, list<int>>("three", number4));
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

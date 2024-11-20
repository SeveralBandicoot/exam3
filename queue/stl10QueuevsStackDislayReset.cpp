
// zWeek_11_Queue.cpp : This file contains the 'main' function. Program execution
begins and ends there.
//
#include <iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<char>, stack<char>);
stack<char> theStack;
queue<char> aQueue;
int main()
{
std::cout << "\n\tQueue vs Stack\n";
std::cout << "\n\tQueue Loads from the bottom vs Stack loads from the top\n";
aQueue.push('a');
aQueue.push('b');
aQueue.push('c');
aQueue.push('X');
theStack.push('a');
theStack.push('b');
theStack.push('c');
theStack.push('Y');
display(aQueue, theStack);
cout << "\n\n\t\tpop = ";
aQueue.pop();
theStack.pop();
display(aQueue, theStack);
cout << "\n\n\t\t2nd pop = ";
aQueue.pop();
theStack.pop();
display(aQueue, theStack);
cout << "\n\n\t\tPushing G = ";
aQueue.push('G');
theStack.push('G');
display(aQueue, theStack);
cout << "\n\n\t\tPushing L = ";
aQueue.push('L');
theStack.push('L');
display(aQueue, theStack);
return 0;
}
void display(queue<char> aQueue, stack<char> theStack)
{
cout << "\nQueue : ";
while (aQueue.empty() != true)
{
cout << "\n " << aQueue.front();
// cout << "\n " << aQueue.back();
aQueue.pop();
}
cout << "\tStack : ";
while (theStack.empty() != true)
{
cout << "\n\t " << theStack.top();
theStack.pop();
}
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

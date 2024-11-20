
#include <iostream>
#include<queue>
using namespace std;
void displayQueue(queue<char>);
void edgeQue(queue<char>);
int main() {
std::cout << "Hello World!\n";
queue<char> theQueue;
theQueue.push('a');
theQueue.push('b');
theQueue.push('c');
theQueue.push('1');
displayQueue(theQueue);
edgeQue(theQueue);
cout << "\tpop = ";
theQueue.pop();
displayQueue(theQueue);
cout << "\n2nd pop = ";
theQueue.pop();
displayQueue(theQueue);
return 0;
}
void displayQueue(queue<char> q)
{
while (q.empty() != true)
{
cout << "\n" << q.front();
q.pop();
}
}
void edgeQue(queue<int> q)
{
cout << "\n\nEdges = size = " << q.size();
cout << "\nFront = " << q.front();
cout << "\n back = " << q.back();
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
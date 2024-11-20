
// zWeek_11_Queue.cpp : This file contains the 'main' function. Program execution
begins and ends there.
//
#include <iostream>
#include<queue>
#include<algorithm>
#include<iterator>
#include<list>
using namespace std;
int main()
{
std::cout << "Hello World!\n";
queue<char> aQueue;
queue<char> temp;
aQueue.push('a');
aQueue.push('b');
aQueue.push('c');
aQueue.push('1');
cout << "\n\nEdges = size = " << aQueue.size();
cout << "\nFront = " << aQueue.front();
cout << "\n back = " << aQueue.back();
while (aQueue.empty() != true) // Problems arise because pop
will remove the data and it must be restored
{ // Solution is to use Functions
& Call-by-Value so pop is not saved - see char queue
cout << "\n" << aQueue.front();
temp.push(aQueue.front());
aQueue.pop();
}
while (aQueue.empty() != true) // Problems arise because pop
will remove the data and it must be restored
{ // Solution is to use Functions
& Call-by-Value so pop is not saved - see char queue
cout << "\n" << aQueue.front();
temp.push(aQueue.front());
aQueue.pop();
}
cout << "\n\n\tpop = ";
temp.pop();
cout << "\n2nd pop = ";
temp.pop();
while (temp.empty() != true)
{
cout << "\n" << temp.front();
temp.pop();
}
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

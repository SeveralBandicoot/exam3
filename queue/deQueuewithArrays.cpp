
// zWeek_11_Queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include<array>
using namespace std;
void displayQueue(int[]);
void enque(int);
void deque();
const int s = 4;
int theQueue[s];
int front = -1;
int rear = -1;
int main()
{
std::cout << "Hello World!\n";
enque(5);
enque(10);
enque(20);
cout << "\nsizeof array = " << size(theQueue);
displayQueue(theQueue);
cout << "\n\n";
enque(30);
displayQueue(theQueue);
enque(30);
cout << "\n\nlets try deque ";
deque();
displayQueue(theQueue);
cout << "\n";
deque();
displayQueue(theQueue);
return 0;
}
void displayQueue(int q[s])
{
for (int i = 0; i < s; i++)
{
cout << "\n" << q[i];
}
}
void enque(int x)
{
if (rear == s - 1)
cout << "\nQueue is full - no more room ";
else if (front == rear && rear == -1)
{
front = 0;
rear = 0;
theQueue[rear] = x;
}
/* else if (front == rear && rear == 0) {
rear++;
theQueue[rear] = x;
}*/
else {
rear++;
theQueue[rear] = x;
}
}
void deque()
{
if (front == rear && rear == -1)
{
cout << "\n\n\tThe Queue is empty ";
}
else if (front == rear && rear != -1) {
front = -1;
rear = -1;
}
else if( front != rear) {
theQueue[front] = 0;
front++;
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

#include <iostream>
#include<queue>

using namespace std;

int main() {
    queue<int> theQueue;

    theQueue.push(3);
    theQueue.push(9);
    theQueue.push(12);
    theQueue.push(6);
    displayQueue(theQueue);
    return 0;
}

void displayQueue(queue<int> q)
{
while (q.empty() != true)
{ cout << "\n" << q.front();
q.pop();
}
}

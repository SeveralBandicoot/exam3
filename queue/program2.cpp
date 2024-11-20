queue<char> aQueue;
queue<char> temp;
aQueue.push('a’); aQueue.push('b’); aQueue.push('c’); aQueue.push('1');
cout << "\n\nEdges = size = " << aQueue.size();
cout << "\nFront = " << aQueue.front();
cout << "\n back = " << aQueue.back();
while (aQueue.empty() != true) {
cout << "\n" << aQueue.front();
temp.push(aQueue.front()); // Note the copy command to refill or reuse the queue data
aQueue.pop();
}
cout << "\n\n\tpop = ";
temp.pop();
cout << "\n2nd pop = ";
temp.pop();
while (temp.empty() != true) {
cout << "\n" << temp.front();
temp.pop();
}
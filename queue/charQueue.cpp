void displayQueue(queue<char> );
int main(){
std::cout << "Hello World!\n";
queue<char> theQueue;
theQueue.push('a');
theQueue.push('b');
theQueue.push('c');
theQueue.push('1');
displayQueue(theQueue);
cout << "\tpop = ";
theQueue.pop();
displayQueue(theQueue);
cout << "\n2nd pop = ";
theQueue.pop();
displayQueue(theQueue);
return 0;}
void displayQueue(queue<char> q)
{
while (q.empty() != true)
{
cout << "\n" << q.front();
q.pop();
}
}

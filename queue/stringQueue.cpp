void displayQueue(queue<string> );
int main()
{
std::cout << "Hello World!\n";
queue<string> theQueue;
theQueue.push("Capulet");
theQueue.push("Montague");
theQueue.push("whats in");
theQueue.push("a name?");
displayQueue(theQueue);
cout << "\tpop = ";
theQueue.pop();
displayQueue(theQueue);
cout << "\n2nd pop = ";
theQueue.pop();
displayQueue(theQueue);
return 0;
}
void displayQueue(queue<string> q)
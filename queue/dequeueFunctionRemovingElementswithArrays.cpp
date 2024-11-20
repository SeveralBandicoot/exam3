cout << "\n\nlets try deque ";
• deque();
• displayQueue(theQueue);
• cout << "\n";
• deque();
• displayQueue(theQueue);
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

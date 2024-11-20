void displayQueue(int q[4]){
for (int i = 0; i < 4; i++)
{
cout << "\n" << q[i];
}
}
void enque(int x){
if (rear == s - 1)
cout << "\nQueue is full - no more room ";
else if (front == rear && rear == -1) // Set Pointers and give Rear the 1st Entry
{
cout << "\n The Queue was Empty ";
front = 0;
rear = 0;
theQueue[rear] = x;
}
else if(front == rear && rear == 0){ // Keep Front as 0 (1st element) and Enter the second Entry into the new rear
rear++;
theQueue[rear] = x;
}
else { // Regular entries
rear++;
theQueue[rear] = x;
}
}

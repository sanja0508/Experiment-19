#include<iostream>
using namespace std;

#define size 5
#define ERROR -9999

class Queue 
{
    int front, rear, ar[size];

    public:
    Queue() 
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int);
    int dequeue();
    void disp();
    bool isFull();
    bool isEmpty();
};

// Check if the queue is full
bool Queue::isFull() 
{
    return (front == (rear + 1) % size);
}

// Check if the queue is empty
bool Queue::isEmpty() 
{
    return (front == -1);
}

// Enqueue: Add an element to the queue
void Queue::enqueue(int num) 
{
    if (isFull()) 
    {
        cout << "QUEUE OVERFLOW: Queue is full" << endl;
        return;
    }

    if (isEmpty()) 
    {
        front = rear = 0;  // Queue is initially empty
    } else {
        rear = (rear + 1) % size;  // Circular increment of rear
    }

    ar[rear] = num;
}

// Dequeue: Remove and return the front element of the queue
int Queue::dequeue() 
{
    if (isEmpty()) 
    {
        cout << "QUEUE UNDERFLOW: Queue is empty" << endl;
        return ERROR;
    }

    int val = ar[front];

    if (front == rear) 
    {
        // Only one element was present
        front = rear = -1;
    } else {
        front = (front + 1) % size;  // Circular increment of front
    }

    return val;
}

// Display the queue elements
void Queue::disp() 
{
    if (isEmpty()) 
    {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Queue contents: ";
    
    if (front <= rear) {
        for (int i = front; i <= rear; i++) {
            cout << ar[i] << " ";
        }
    } else {
        for (int i = front; i < size; i++) {
            cout << ar[i] << " ";
        }
        for (int i = 0; i <= rear; i++) {
            cout << ar[i] << " ";
        }
    }

    cout << endl;
}

int main() 
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.disp();

    cout << "Dequeued element: " << q.dequeue() << endl;

    q.disp();

    q.enqueue(50);
    q.enqueue(60);

    q.disp();

    cout << "Dequeued element: " << q.dequeue() << endl;

    q.disp();

    return 0;
}

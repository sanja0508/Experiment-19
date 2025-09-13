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

bool Queue::isFull() 
{
    return (front == (rear + 1) % size);
}

bool Queue::isEmpty() 
{
    return (front == -1);
}

void Queue::enqueue(int num) 
{
    if (isFull()) 
    {
        cout << "QUEUE OVERFLOW: Queue is full" << endl;
        return;
    }

    if (isEmpty()) 
    {
        front = rear = 0;
    } else {
        rear = (rear + 1) % size;
    }

    ar[rear] = num;
}

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
        front = (front + 1) % size;
    }

    return val;
}

void Queue::disp() 
{
    if (isEmpty()) 
    {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Queue contents: "

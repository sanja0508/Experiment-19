# Experiment-19

Experiment 19: Queue Implementation Using Array

Aim: To implement a Queue using an array and perform basic operations such as Enqueue, Dequeue, Peek, and Display. The program should also handle overflow and underflow conditions.

Software Required: Visual Studio

Theory: A Queue is a linear data structure that follows the First-In-First-Out (FIFO) principle. It operates like a queue in real life, where the first person to join the queue is the first to be served.
Queues are typically implemented using two pointers:
Front: This pointer refers to the front of the queue (i.e., the element that will be dequeued next).
Rear: This pointer refers to the back of the queue (i.e., where elements are added).

The basic operations for a queue are:
Enqueue: Add an element to the queue at the rear.
Dequeue: Remove an element from the queue from the front.
Peek (Front): View the front element of the queue without removing it.
Display: Print all elements currently in the queue.

When using an array to implement a queue, the queue can be represented as a fixed-size array. To manage the queue efficiently:
Overflow occurs when trying to enqueue an element when the queue is full.
Underflow occurs when trying to dequeue an element from an empty queue.
Circular Queue is a special type of queue that is implemented using an array, where the last position of the array points back to the first position, thus making efficient use of space.

Algorithm:
Initialization:
Initialize the front and rear pointers to -1, indicating an empty queue.
Define the maximum size of the queue.

Enqueue Operation:
Check if the queue is full by verifying if (rear + 1) % size == front.
If not full, increment the rear pointer in a circular manner (rear = (rear + 1) % size) and add the new element at the rear.

Dequeue Operation:
Check if the queue is empty by verifying if front == -1.
If not empty, increment the front pointer in a circular manner (front = (front + 1) % size) and remove the element at front.

Peek Operation:
If the queue is not empty, return the element at the front.

Display Operation:
Print all elements from the front to the rear, considering the circular nature of the queue.

Conclusion: In this experiment, we implemented a circular queue using an array in C++. We performed basic operations such as enqueue, dequeue, peek, and display while handling overflow and underflow conditions. The use of a circular queue ensures efficient utilization of space, preventing wasted slots when the queue is not full but elements have been removed from the front. This experiment gives a hands-on understanding of circular queue implementation and its operations.

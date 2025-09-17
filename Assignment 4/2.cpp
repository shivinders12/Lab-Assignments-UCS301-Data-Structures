#include <iostream>
using namespace std;

#define MAX_SIZE 5

class CircularQueue {
public:
    int arr[MAX_SIZE];
    int front; 
    int rear; 

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isfull() {
        return (rear + 1) % MAX_SIZE == front;
    }

    void enqueue(int v) {
        if (isfull()) {
            cout << "Queue is full" << endl;
            return;
        }
        
        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }
        
        arr[rear] = v;
        cout << "Enqueued: " << v << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        
        cout << "Dequeued: " << arr[front] << endl;
        
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (i != rear) {
            cout << arr[i] << " ";
            i = (i + 1) % MAX_SIZE;
        }
        cout << arr[rear] << endl;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot peek." << endl;
            return;
        }
        cout << "Peeked: " << arr[front] << endl;
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.peek();

    q.dequeue();
    q.display();
    
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); 
    q.display();

    return 0;
}
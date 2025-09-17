#include <iostream>
using namespace std;

#define MAX_SIZE 5

class Queue {
public:
    int arr[MAX_SIZE];
    int front; 
    int rear; 

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isfull() {
       
        return (rear == MAX_SIZE - 1);
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
            rear++;
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
            
            front++;
        }
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void peek()
    {
        cout<<arr[front]<<endl;
    }
};

int main() {
    Queue q;

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
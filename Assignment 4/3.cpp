#include <iostream>
#include <string>
#include <queue>
#include <stack>

#define MAX_SIZE 6
using namespace std;

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

    void push(int v) {
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
                  
    void interleave()
    {
        int n= MAX_SIZE/2;
        stack<int> s;

        for(int i=n;i<MAX_SIZE;i++)
        {
            s.push(arr[i]);
        }
        int arr2[MAX_SIZE];
        for(int i=0;i<3;i++)
        {
            arr[i+i]=arr[i];

        }
        display();

    }
};
                  
int main() {
    Queue  q;
    q.push(4);
    q.push(7);
    q.push(11);
    q.push(20);
    q.push(5);
    q.push(9);
    q.display();

    q.interleave();

   
    return 0;
}
#include <iostream>
using namespace std;

#define MAX_SIZE 5

class Queue {
private:
    int arr[MAX_SIZE];
    int front; 
    int rear;  

public:
    
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        if (front==-1 && rear==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isfull()
    {
        if (rear==MAX_SIZE-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int v)
    {
        
        if(isfull)
        {cout<<"Queue is full";        }
        if(isEmpty)
        {
            front=0;
        }
        rear=rear++;
        arr[rear]=v;
    }
    
   
};

int main() {
    Queue q;


    return ;
}
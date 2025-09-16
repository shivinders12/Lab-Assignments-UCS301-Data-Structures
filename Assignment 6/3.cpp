// #include <iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int val) : data(val), next(nullptr), prev(nullptr) {}
// };

// class DoublyLinkedList {
// private:
//     Node* head;

// public:
//     DoublyLinkedList() : head(nullptr) {}

//     void append(int val) {
//         Node* newNode = new Node(val);
//         if (head == nullptr) {
//             head = newNode;
//         } else {
//             Node* current = head;
//             while (current->next != nullptr) {
//                 current = current->next;
//             }
//             current->next = newNode;
//             newNode->prev = current;
//         }
//     }

 
//     int getSize() {
//         int count = 0;
//         Node* current = head;
//         while (current != nullptr) {
//             count++;
//             current = current->next;
//         }
//         return count;
//     }
// };

// int main() {
//     DoublyLinkedList list;
//     list.append(10);
//     list.append(20);
//     list.append(30);

//     cout << "Size of the doubly linked list: " << list.getSize() << std::endl;
//     return 0;
// }

#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    void append(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            newNode->next = head; 
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

   
    int getSize() {
        if (head == nullptr) {
            return 0;
        }

        int count = 0;
        Node* current = head;
        
        do {
            count++;
            current = current->next;
        } while (current != head);

        return count;
    }
};

int main() {
    CircularLinkedList list;
    list.append(10);
    list.append(20);
    list.append(30);

    cout << "Size of the circular linked list: " << list.getSize() << std::endl;
    return 0;
}
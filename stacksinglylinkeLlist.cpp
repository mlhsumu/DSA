#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* top = nullptr; // Initialize top to nullptr

    // Push operation to add an element to the stack
    // Push 10
    Node* newNode1 = new Node();
    newNode1->data = 10;
    newNode1->next = top;
    top = newNode1;

    // Push 20
    Node* newNode2 = new Node();
    newNode2->data = 20;
    newNode2->next = top;
    top = newNode2;

    // Push 30
    Node* newNode3 = new Node();
    newNode3->data = 30;
    newNode3->next = top;
    top = newNode3;

    // Peek operation to view the top element
    if (top != nullptr) {
        cout << "Top element is: " << top->data << endl; // Should print 30
    } else {
        cout << "Stack is empty." << endl;
    }

    // Pop operation to remove an element from the stack
    if (top != nullptr) {
        Node* temp = top;
        top = top->next;
        delete temp;
    } else {
        cout << "Stack is empty. Cannot pop." << endl;
    }

    if (top != nullptr) {
        cout << "Top element after pop is: " << top->data << endl; // Should print 20
    } else {
        cout << "Stack is empty." << endl;
    }

    while (top != nullptr) {
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    return 0;
}

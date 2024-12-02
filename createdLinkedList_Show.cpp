#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int n, item;
    Node *p, *q, *head;

    cout << "Enter the number of nodes: ";
    cin >> n;

    if (n <= 0) {
        cout << "The number of nodes should be greater than 0." << endl;
        return 0;
    }

    cout << "Enter the data for the head node: ";
    cin >> item;

    q = new Node(); // Dynamically allocate memory for a new node
    q->data = item; // Set the data for the head node
    q->next = NULL;

    head = q; // Set head to point to the first node
    p = head; // Use p to traverse the list

    for (int i = 1; i < n; i++) {
        cout << "Enter the data for node " << i + 1 << ": ";
        cin >> item;

        q = new Node(); // Dynamically allocate memory for a new node
        q->data = item; // Set the data for the new node
        q->next = NULL;

        p->next = q; // Link the previous node to the new node
        p = p->next; // Move p to the new node
    }

    cout << "The linked list is: ";
    p = head;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;

    // Free the allocated memory (optional, but good practice)
    p = head;
    while (p != NULL) {
        Node* temp = p;
        p = p->next;
        delete temp;
    }

    return 0;
}

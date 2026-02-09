#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to traverse circular linked list
void traverse(Node* head) {
    if (!head) return;
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

// Insert at end
Node* insertEnd(Node* head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    if (!head) {
        newNode->next = newNode;
        return newNode;
    }
    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
    return head;
}

int main() {
    Node* head = nullptr;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);

    traverse(head); // Output: 10 20 30
    return 0;
}

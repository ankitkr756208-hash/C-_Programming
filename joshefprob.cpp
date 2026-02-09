#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

int josephus(int n, int k) {
    // Step 1: Create circular linked list
    Node* head = new Node(1);
    Node* prev = head;
    for (int i = 2; i <= n; i++) {
        prev->next = new Node(i);
        prev = prev->next;
    }
    prev->next = head; // circular

    // Step 2: Elimination process
    Node* ptr = head;
    Node* temp;

    while (ptr->next != ptr) {  // more than 1 node left
        // Move (k-1) steps
        for (int count = 1; count < k - 1; count++)
            ptr = ptr->next;

        // Delete k-th node
        temp = ptr->next;
        ptr->next = temp->next;
        ptr = ptr->next;   // move to next node
        delete temp;
    }
    int survivor = ptr->data;
    delete ptr; // free memory
    return survivor;
}

int main() {
    int n = 7, k = 3;
    cout << "Survivor: " << josephus(n, k) << endl;
    return 0;
}

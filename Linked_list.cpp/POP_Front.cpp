#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;
public:
    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    } // ✅ properly close push_front here

    //Pop_front() function
    void pop_front(){
        if(head==NULL){
            cout<<"LL is empty\n";
            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;

        delete temp;
    }

    
    

    void printLL() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    List l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(4);

    l1.pop_front();

    

    l1.printLL(); // Output: 3 2 1

    return 0;
}

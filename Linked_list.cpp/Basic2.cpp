#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next=NULL;
    }
};
void insertAthead(Node* &head,int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}
void insertAttail(Node* &head,int val){
    Node* new_node=new Node(val);
    Node* temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    //temp is at last node
    temp->next=new_node;
    
}

void insertAtposition(Node* &head,int val,int pos){
    if(pos==0){
        insertAthead(head,val);
        return;
    }
    Node* new_node=new Node(val);
    Node* temp=head;
    int current_pos=0;
    while(current_pos < pos-1){
        temp=temp->next;
        current_pos++;
    }
    //temp is at pos-1
    new_node->next=temp->next;
    temp->next=new_node;
}
void updateAtposition(Node* &head,int k,int val){
    Node* temp=head;
    int curr_pos=0;
    while(curr_pos !=k){
        temp=temp->next;
        curr_pos++;
    }
    //temp is at k
    temp->val=val;
}

void deleteAthead(Node* &head){
    Node* temp=head;//temp is pointing to head
    head=head->next;
    delete temp;
}
void deleteAttail(Node* &head){
    Node* second_last=head;
    while(second_last->next->next !=NULL){
        second_last=second_last->next;
    }
    //second_last is at second last node
    Node* temp=second_last->next;
    second_last->next=NULL;
    delete temp;
}

void deleteAtPosition(Node* &head,int pos){
    if(pos==0){
        deleteAthead(head);
        return;
    }
    int curr_pos=0;
    Node* prev=head;
    while(curr_pos != pos-1){
        prev=prev->next;
        curr_pos++;
    }

    //prev is pointing to node at pos-1
    Node* temp=prev->next;
    prev->next=prev->next->next;
    delete temp;
}
void display(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->val<<"-> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head =NULL;
    insertAthead(head,3);
    insertAthead(head,2);
    insertAthead(head,1);
    // display(head);
    insertAttail(head,4);
    insertAttail(head,5);
    display(head);
    insertAtposition(head,100,2);
    display(head);
    updateAtposition(head,3,200);
    deleteAthead(head);
    deleteAttail(head);
    deleteAtPosition(head,2);

    display(head);
}
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

    //  Destructor
    ~Node(){
        // cout << "Node destructor for data " << data << endl;
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = NULL;
        tail = NULL;
    }

    //  Destructor
    ~List(){
        // cout << "List destructor called" << endl;
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

  void insert(int val,int pos){ 
    Node* newNode=new Node(val); 
    Node* temp=head; 
    for(int i=0;i<pos-1;i++)
    { temp=temp->next; } //temp is now at pos-1 -> prev/left

     newNode->next=temp->next;
      temp->next=newNode; 
    }

    void pop_front(){
        if(head==NULL){
            cout<<"LL is empty"<<endl;
            return; 
        }

        Node* temp=head;
        head=head->next;

        temp->next=NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp=head;

        while(temp->next->next !=NULL){
            temp=temp->next;
        }
        temp->next=NULL; //temp is now at second last node
        delete tail;
        tail=temp;
    }
    int search(int key){
        Node* temp=head;
        int pos=0;
        while(temp !=NULL){
            if(temp->data==key){
                return pos;
            }
            temp=temp->next;
            pos++;
        }
        return -1; //key not found
    }

    int helper(Node* temp,int key){
        if(temp==NULL){
            return -1; //key not found
        }
        if(temp->data==key){
            return 0;
        }
        int idx=helper(temp->next,key);
        if(idx==-1){
            return -1; //key not found in rest of the list
        }
        return idx + 1; //key found in rest of the list, add 1 to account for current node
    }
    int searchRec(int key){
        return helper(head,key);
    }

    void reverse(){
        Node* prev=NULL;
        Node* curr=head;

        while(curr !=NULL){
            Node* next=curr->next;
            curr->next=prev;

            //update prev and curr
            prev=curr;
            curr=next;
        }
        head=prev;
    }

    int getsize(){
        int sz=0;
        Node* temp=head;

        while(temp !=NULL){
            temp=temp->next;
            sz++;
        }
        return sz;
    }
    void removeNth(int n){  //0(n) ;0(1)
        Node* prev=head;
        int size=getsize();

        for(int i=1;i<(size-n);i++){
            prev=prev->next;
        }
        Node* toDel=prev->next;
        cout<<"Deleted Node: "<<toDel->data<<endl;
         
        prev->next=prev->next->next;
    }

    bool isCycle(Node* head){
        Node* slow=NULL;
        Node* fast=NULL;

        while(fast !=NULL && fast->next->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                cout<<"Cycle is present at node with data: "<<slow->data<<endl; 
                return true;
            }
        }
        return false;   
    }

     void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main(){
    List ll;

    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);   // 30->20->10

    ll.push_back(40);
    ll.push_back(50);    // 30->20->10->40->50

    ll.insert(25, 2);    // 30->20->25->10->40->50

    ll.pop_front();      // 20->25->10->40->50

    ll.pop_back();       // 20->25->10->40
    ll.print();
   
    cout << "Position of 25: " << ll.searchRec(25) << endl; // Should print position of 25

    ll.reverse();        // 40->10->25->20

    ll.removeNth(2);      // Removes the 2nd node from the end, which is 25 in this case
    

    ll.print();
}
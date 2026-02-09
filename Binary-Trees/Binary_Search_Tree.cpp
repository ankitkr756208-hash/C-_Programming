#include<iostream>
#include<vector>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=right=NULL;
    }
};

node* insert(node* root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}
node* buildBST(vector<int>arr){
    node* root=NULL;

    for(int val : arr){
        root=insert(root,val);
    }
    return root;
}
void inorder(node* root){
    if(root==NULL)return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
bool search(node* root, int key){//O(height)
    if(root==NULL)return false;
    if(root->data==key)return true;
    if(root->data>key){
        return search(root->left,key);

    }
    else{
        return search(root->right,key);
    }
}

node* getInorderSuccessor(node* root){
    while(root !=NULL && root->left!=NULL){
        root=root->left;
    }
    return root;
}
node* delNode(node* root,int key){
    if(root==NULL) return NULL;
    if(key<root->data){
        root->left=delNode(root->left,key);
    }
    else if(key > root->data){
        root->right=delNode(root->right,key);
    }
    else{
        //key ==root
        if(root->left==NULL){
            node* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            node* temp=root->left;
            delete root;
            return temp;
        }
        else{//2 children
            node* IS=getInorderSuccessor(root->right);
            root->data=IS->data;
            root->right=delNode(root->right,IS->data);
        }

    }
    return root;
}

void printInRange(node* root,int st,int end){
    if(root==NULL) return;

    if(st <=root->data && root->data <=end){
        cout<<root->data<<" ";
        printInRange(root->left,st,end);
        printInRange(root->right,st,end);
    }
    else if(root->data <st){
        printInRange(root->right,st,end);
    }
    else {
        printInRange(root->left,st,end);
    }
}

void pathhelper(node* root, vector<int> &path){
    path.push_back(root->data);
    if(root->left==NULL && r)
}

int main(){
    vector<int>arr={3,2,1,5,6,4};
    node* root=buildBST(arr);
    cout<<"Before :";
    inorder(root);
//    cout<< search(root,5)<<endl;//1
    cout<<endl;
    delNode(root,6);
    cout<<"After:";
    inorder(root);
    cout<<endl;

    cout<<"Nodes in range 2 to 4 are : ";
    printInRange(root,2,4);

} 
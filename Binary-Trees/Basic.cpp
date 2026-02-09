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

static int idx=-1;
node* buildtree(vector<int> preorder){
    idx++;
    if(preorder[idx]==-1) return NULL;
    node* root=new node(preorder[idx]);
    root->left=buildtree(preorder);//left subtree
    root->right=buildtree(preorder);//right subtree
    return root;
}
//preorder traversal: root->left->right
void preorder(node* root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    vector<int>preorder={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* root =buildtree(preorder);
    // cout<<"root data:"<<root->data<<endl;
    // cout<<"left child of root:"<<root->left->data<<endl;
    // cout<<"right child of root:"<<root->right->data<<endl;
    // cout<<"left child of left subtree:"<<root->left->left->data<<endl;
    // cout<<"right child of left subtree:"<<root->left->right->data<<endl;

    cout<<"preorder traversal of tree:"<<endl;
    
    

} 
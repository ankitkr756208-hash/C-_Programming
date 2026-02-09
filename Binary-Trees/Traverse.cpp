#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int val) {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
node* buildtree(vector<int>& preorder) {
    idx++;
    if (preorder[idx] == -1) return NULL;
    node* root = new node(preorder[idx]);
    root->left = buildtree(preorder);
    root->right = buildtree(preorder);
    return root;
}

void preorder(node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
//Level order traversal
void levelorder(node* root){
    queue<node*>q;

    q.push(root);
    while(q.size()>0){
        node* curr=q.front();
        q.pop();
        cout<<curr->data<<" ";

        if(curr->left !=NULL){
            q.push(curr->left);
        }

        if(curr->right !=NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;
}
//Top view of tree
void topView(node* root){
    queue<pair<node* , int>>q;//(node,hd)
    map<int,int>m;//hd,node->data
    q.push({root,0});

    while(q.size()>0){
        node* curr=q.front().first;
        int currHD=q.front().second;
        q.pop();
        if(m.find(currHD)==m.end()){
            m[currHD]=curr->data;
        }

        if(curr->left !=NULL){
            q.push({curr->left,currHD-1});
        }
        if(curr->right !=NULL){
            q.push({curr->right,currHD+1 });
        }
    }
    for(auto it:m){
        cout<<it.second<<" ";
    }
    cout<<endl;
}
//kth Level of tree
void kthLevel(node* root,int k){
    if(root==NULL)return;
    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    kthLevel(root->left,k-1);
    kthLevel(root->right,k-1);
}
//Height of a tree
int height(node* root){
    if(root==NULL) return 0;

    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}

//count of nodes
int count(node* root){
    if(root==NULL) return 0;
  int  leftcount=count(root->left);
    int rightcount=count(root->right);
    return leftcount+rightcount+1;
    
}
//sum of nodes
int sum(node* root){
    if(root==NULL) return 0;
    return root->data + sum(root->left) + sum(root->right);
}
int sumTree(node* root){
    if(root==NULL)return 0;
    int leftSum=sumTree(root->left);
    int rightSum=sumTree(root->right);
    root->data +=leftSum + rightSum;

    return root->data;
}

int diam1(node* root){//0(n^2)
    if(root==NULL) return 0;
    int currdiam=height(root->left)+height(root->right) +1;
    int leftdiam=diam1(root->left);
    int rightdiam=diam1(root->right);

    return max(currdiam,max(leftdiam,rightdiam));
}
pair<int,int> diam2(node* root){//O(n)
    if(root==NULL){
        return make_pair(0,0);//(diameter,height)
    }   
    //(diameter,height)
    pair<int,int>leftInfo=diam2(root->left);//(LD,LH)
    pair<int,int>rightInfo=diam2(root->right);//(RD,RH)

    int currdiam=leftInfo.second + rightInfo.second +1;
    int finaldiam=max(currdiam , max(leftInfo.first , rightInfo.first));
    int currheight=max(leftInfo.second , rightInfo.second) +1;

    return make_pair(finaldiam , currheight);
}
bool isIdentical(node* root1,node* root2){
     if(root1==NULL && root2==NULL) return true;
    else  if(root1==NULL || root2==NULL) return false;

    if(root1->data !=root2->data) return false;

    return isIdentical(root1->left,root2->left) && isIdentical(root1->right,root2->right);
}

bool isSubtree(node* root,node* subRoot){
    if(root==NULL && subRoot==NULL) return true;
    else  if(root==NULL || subRoot==NULL) return false;

    if(root->data==subRoot->data){
       if( isIdentical(root,subRoot)){
        return true;
       }
    }
    int isLeftsubtree=isSubtree(root->left,subRoot);
    if(!isLeftsubtree){
        return isSubtree(root->right,subRoot);
    }
    return true;
}

int main() {
    vector<int> nodes = {1,2,-1,-1,3,4,-1,-1,5,-1,-1 };
    node* root = buildtree(nodes);

    cout << "Preorder traversal of tree:\n";
    preorder(root);
    cout << endl;

    cout << "Inorder traversal of tree:\n";
    inorder(root);
    cout << endl;

    cout << "Postorder traversal of tree:\n";
    postorder(root);
    cout << endl;

    cout<<"Level order: \n";
    levelorder(root);

    cout<<"Height of tree: "<<height(root)<<endl;
    cout<<"Count of nodes: "<<count(root)<<endl;
    cout<<"Sum of all nodes: "<<sum(root)<<endl;
    cout<<"Top view of tree: ";
    topView(root);
    kthLevel(root,2);

    cout<<"Sum of tree node"<<sumTree(root)<<endl;
    
    cout<<"Diameter of Tree:"<<diam1(root)<<endl;
    cout<<"Diameter of Tree:"<<diam2(root).first<<endl;

    node* subRoot=new node(2);
    subRoot->left=new node(3);
    subRoot->right=new node(4);

    cout<<isSubtree(root,subRoot)<<endl;
}

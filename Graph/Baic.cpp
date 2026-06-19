#include<iostream>
#include<vector>
#include<list>
#include <queue>
#include <stack>

using namespace std;

class Graph{
    int v;
    list<int> *l;//int * arr;

public:
    Graph(int v){
        this->v=v;
        l=new list<int>[v];//arr=new int[v];
    }
    void addEdge(int v,int u){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void printAdjList(){
        for(int i=0;i<v;i++){
            cout<<i<<" : ";
            for(int neigh : l[i]){
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }

    // cycle detection in undirected graph using dfs
    bool isCycleUndirect(int src,int par,vector<bool> &vis){ // dfs algo
        vis[src]=true;
        list<int>neigh=l[src];
        for(int v:neigh){
            if(!vis[v]){
                if(isCycleUndirect(v,src,vis)){
                    return true;
                }
            }
            else if(v!=par){
                return true;
            }
        }
        return false;

    }

    bool isCycle(){
        vector<bool>vis(v,false);

        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(isCycleUndirect(i,-1,vis)){
                    cout<<"cycle is present in the graph"<<endl;
                    return true;
                }
            }
        }
        return false;

    }

    // cycle detection in undirected graph using bfs
    bool isCycleBFS(int src,vector<bool> &vis){ 
        queue<pair<int,int>> q; // {node,parent}
        q.push({src,-1});
        vis[src]=true;

        while(!q.empty()){
            int node=q.front().first;
            int par=q.front().second;
            q.pop();

            for(int neigh:l[node]){
                if(!vis[neigh]){
                    vis[neigh]=true;
                    q.push({neigh,node});
                }
                else if(neigh!=par){
                    return true;
                }
            }
        }
        return false;
    }

     bool isCycleBFS(){
        vector<bool>vis(v,false);

        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(isCycleBFS(i,vis)){
                    cout<<"cycle is present in the graph"<<endl;
                    return true;
                }
            }
        }
        return false;

     } 

     // topological sort using  stack bfs
     void topoHelper(int node,
                vector<bool>& vis,
                stack<int>& st){

    vis[node] = true;

    for(int neigh : l[node]){

        if(!vis[neigh]){
            topoHelper(neigh, vis, st);
        }
    }

    st.push(node);
}

void topoSort(){

    vector<bool> vis(v,false);
    stack<int> st;

    for(int i=0;i<v;i++){

        if(!vis[i]){
            topoHelper(i,vis,st);
        }
    }

    cout<<"Topological Order : ";

    while(!st.empty()){

        cout<<st.top()<<" ";
        st.pop();
    }

    cout<<endl;
}


};


int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.addEdge(2,3);

    g.printAdjList();
    g.isCycle();

     if (g.isCycleBFS())
        cout << "Cycle is present in the graph\n";
    else
        cout << "Cycle is not present in the graph\n";

    g.topoSort();
    
}
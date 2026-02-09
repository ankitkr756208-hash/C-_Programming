#include<iostream>
#include<vector>
#include<list>
#include<queue>
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
   //BFS Traversal//tc(V+E)
   void bfs(){
    queue<int> q;
    vector<bool> vis(v,false);


    q.push(0);
    vis[0]=true;
    while(q.size()>0){
        int u=q.front();//u-v
        q.pop();
        cout<<u<<" ";
        for(int v:l[u]){ //v ->immediate neighbour
            if(!vis[v]){
                
                vis[v]=true;
                q.push(v);
            }
        }
    }
    cout<<endl;
   }

   //DFS traversal //tc(v+e)
   void dfsHelper(int u, vector<bool> &vis){
    cout << u << " ";
    vis[u] = true;

    for(int v : l[u]){
        if(!vis[v]){
            dfsHelper(v, vis);
        }
    }
}

void dfs(){
    int src = 0;
    vector<bool> vis(v, false);
    dfsHelper(src, vis);
    cout<<endl;
}

};


int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
   cout<<"BFS Traversal: ";
    g.bfs();
    cout<<"DFS Traversal: ";
    g.dfs();

    
    
}
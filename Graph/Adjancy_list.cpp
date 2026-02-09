//Depth First Search (DFS)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void DFS_Visit(vector<int> Adj[], vector<int>& status, int i)
{
    status[i] = 1;
    cout << i;
    for(int j = 0; j < Adj[i].size(); j++)
    {
        if(status[Adj[i][j]]== 0)
            DFS_Visit(Adj, status, Adj[i][j]);
    }
}

void DFS(vector<int> Adj[], int N)
{
    vector<int> status(N, 0);
    for(int i = 0; i < N; i++)
    {
        if(status[i] == 0)
            DFS_Visit(Adj, status, i);
    }
}
int main()
   {
    int V,E,a,b;
    cout<<"enter the no of vertices are in the graph";
    cin>>V;
    cout<<"enter the no of edges in the graph";
    cin>>E;
    vector<int>Adj[V];
    for(int i=1;i<=E;i++)
    {
        cout<<"enter the end points of the edge";
        cin>>a>>b;
        Adj[a].push_back(b);
        Adj[b].push_back(a);

    }
    for(int i=0;i<V;i++)
    {
        cout<<i<<":";
        for(int j=0;j<Adj[i].size();j++)
        {
            cout<<Adj[i][j]<<",";

        }
        cout<<endl;
    }
    cout<<"order of DFS is:=> ";
    DFS(Adj,V);
    return 0;

}
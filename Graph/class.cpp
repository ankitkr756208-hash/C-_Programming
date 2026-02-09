#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int v,e;
  cout <<"enter the no of vertices ";
  cin >>v;
  cout <<"enter the no of edges ";
  cin >>e;
  vector<vector<int>> adj(v);
  for(int i=0;i<e;i++)
  {
    cout <<"enter the end point of edges";
    int a,b;
    cin >>a >>b ;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  //printing od adj list 
    for(int i=0;i<v;i++)
  {
  cout <<i <<":";
  for(int j=0;j<adj[i].size();j++)
  {
    cout <<adj[i][j] <<"," ;
  }
  cout <<"\n";
 }
 //bfs
 vector<int>status(v,0);
 queue<int> q;
 q.push(0);
 status[0]=1;
 cout <<"bfs of graph is ";
 while(!q.empty())
 {
  int x=q.front();
  q.pop();
  cout <<x <<",";
  for(size_t j=0;j<adj[x].size();j++)
  {
    int a=adj[x][j];
    if(status[a]==0)
    {
      status[a]=1;
      q.push(a);
    }
  }
 }
}
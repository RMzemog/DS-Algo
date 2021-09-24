#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void addEdge(vector<int>adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void bfs(vector<int>adj[], int v, int s){
    bool visited[v+1];
    for(int i = 0; i < v; i++){
        visited[i] = false;
    }
    queue<int>q;
    visited[s]  = true;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(int v : adj[u]){
            if(visited[v] == false){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int main(){
    int v = 4;
    vector<int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    for(auto it:adj){
        for(auto ti: it){
            cout<<ti<<" ";
        }
        cout<<endl;
    }
    bfs(adj,3,0);
}
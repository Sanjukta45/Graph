// Online C++ compiler to run C++ program online
#include<stdio.h>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void BFS(vector<vector<int>> adj, int start, int v){
    queue<int> q;
    vector<bool> visited(v,false);
    
    q.push(start);
    
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node <<" ";
        visited[node] = true;
        
        for(int i : adj[node]){
            if (!visited[i]){
                q.push(i);
            }
        }
        
    }
}



int main() {
    int vertex, edges;
    

    cout << "Enter number of vertices \n";
    cin >> vertex;
    
    vector<vector<int>> adj(vertex+1);

    

    //take the number of edges
    cout << "Enter number of edges : \n";
    cin>> edges;

    //making connection
    for(int i=0; i<edges; i++){
        cout << "Enter edge between : ";
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }


    //print the graph

    for(int i=1; i<=vertex; i++){
        cout << "Edges of " << i << "Are :";
        for (int j : adj[i]){
            
            cout << j <<" ";
           
        }
        cout<<endl;
        
    }
    cout << "BFS Travesal of graph :" <<"\n";
    BFS(adj,1,vertex);
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int vertex, edges;
    

    cout << "Enter number of vertices \n";
    cin >> vertex;

    int adj[vertex][vertex];

    //intitialize my adj matrix
    for(int i=0; i<vertex; i++){
        for(int j=0; j<vertex; j++){
            adj[i][j] = 0;
        }
    }

    //take the number of edges
    cout << "Enter number of edges : \n";
    cin>> edges;

    //making connection
    for(int i=0; i<edges; i++){
        cout << "Enter edge between : ";
        int u, v;
        cin >> u >> v;

        adj[u][v] = 1;
        adj[v][u] = 1;

    }


    //print the graph

    for(int i=0; i<vertex; i++){
        for (int j =0; j<vertex; j++){
            cout << "Edges of " << i << "Are :";
            if (adj[i][j] == 1){
                cout << i << " " << j <<"\n";
            }
        }
    }
    return 0;

}
// C++ program to represent undirected and weighted graph 
// using STL. The program basically prints adjacency list 
// representation of graph 
#include <bits/stdc++.h> 
using namespace std; 
  
// To add an edge 
void addEdge(vector <pair<int, int> > adj[], int u, int v, int wt) 
{ 
    adj[u].push_back(make_pair(v, wt)); 
    adj[v].push_back(make_pair(u, wt)); 
} 
  
// Print adjacency list representaion ot graph 
void printGraph(vector<pair<int,int> > adj[], int V) 
{ 
    int v, w; 
    for (int u = 0; u < V; u++) 
    { 
        cout << "Node " << u << " makes an edge with \n"; 
        for (auto it = adj[u].begin(); it!=adj[u].end(); it++) 
        { 
            v = it->first; 
            w = it->second; 
            cout << "\tNode " << v << " with edge weight = " << w << "\n"; 
        } 
        cout << "\n"; 
    } 
} 
  
// Driver code 
int main() 
{ 
    int V = 6; 
    vector<pair<int, int> > adj[V]; 
    addEdge(adj, 0, 1, 10); 
    addEdge(adj, 1, 2, 20); 
    addEdge(adj, 2, 3, 30); 
    addEdge(adj, 3, 4, 30); 
    addEdge(adj, 4, 5, 30); 
    addEdge(adj, 5, 0, 30); 

    printGraph(adj, V); 
    return 0; 
} 
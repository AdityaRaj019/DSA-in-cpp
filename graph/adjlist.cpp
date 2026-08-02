#include <bits/stdc++.h>

using namespace std;
template <typename T>
class graph{
    public:
        unordered_map<T,list<T>>adj;
        void addEdge(T u, T v , bool dir){
            adj[u].push_back(v);
            if(dir == 0){
                adj[v].push_back(u);
            }
        }
        void printList(){
            for(auto it : adj){
                cout << it.first << "->";
                for(auto j : it.second){
                    cout << j << ", ";
                    
                }
                cout<<endl;
            }
        }
};

template <typename T>
void buildGraph() {
    graph<int> g;
    int n; 
    cout << "Enter no of nodes";
    cin >> n;
    int m;
    cout << "Enter no of edges";
    cin >> m;

    for(int i = 0 ; i < m ; i++){
        T u , v;
        cin >> u >> v;
        g.addEdge(u,v,0);
    }

    g.printList();
}

int main() {
    buildGraph<int>();
    return 0;
}

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
        void bfs(T start){
            queue<T> q;
            unordered_map<T , bool> visited;
            visited[start] = 1;
            q.push(start);

            while(!q.empty()){
                T front  = q.front();
                q.pop();
                cout << front << " ";
                for(auto it : adj[front]){
                    if(!visited[it]){
                        q.push(it);
                        visited[it] = 1;
                    }
                }
            }
        }
        void dfsHelper(T node , unordered_map<int,bool>&visited){
            visited[node] = 1;
            cout << node << " ";
            for(auto it:adj[node]){
                if(!visited[it]){
                    dfsHelper(it,visited);
                }
            }
        }

        void dfs(T start){

            unordered_map<int,bool>visited;
            dfsHelper(start , visited);
        }
};

template <typename T>
void buildGraph() {
    graph<T> g;
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

    T start;
    cout << "Enter starting node";
    cin >> start;

    g.printList();
    cout << "BFS traversal: ";
    g.bfs(start);
    cout << endl;

    cout << "DFS traversal: ";
    g.dfs(start);
    cout << endl;
}


int main() {
    buildGraph<int>();
    
    return 0;
}

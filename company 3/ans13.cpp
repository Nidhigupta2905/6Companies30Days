// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
         boolean [] visited = new boolean [v];
        int [] timeOfInsertion = new int [v];
        int [] lowestTime = new int [v];
        int timer = 0;
        for (int i=0; i<v; i++) {
            if (!visited[i]) {
                if (isBridgeFoundAtCD(i, -1, visited, timeOfInsertion, lowestTime, adj, timer, c, d)) {
                    return 1;
                }
            }
        }
        return 0;
    }
    
    static boolean isBridgeFoundAtCD(int node, int parent, boolean [] visited, int [] timeOfInsertion, int [] lowestTime, ArrayList<ArrayList<Integer>>adj, int timer, int c, int d) {
        visited[node] = true;
        timeOfInsertion[node] = lowestTime[node] = timer++;
        ArrayList<Integer> children =adj.get(node);
        for (Integer child : children) {
            if (child == parent) {
                continue;
            }
            if (!visited[child]) {
                if (isBridgeFoundAtCD(child, node, visited, timeOfInsertion, lowestTime, adj, timer, c, d)) {
                    return true;
                }
                lowestTime[node] = Math.min(lowestTime[node], lowestTime[child]);
                if (lowestTime[child] > timeOfInsertion[node]) {
                    if ((child == c && node == d) || (child == d && node == c)) {
                        return true;
                    }
                }
            }
            else {
                lowestTime[node] = Math.min(lowestTime[node], timeOfInsertion[child]);
            }
        }
        return false;
    }
}


// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}

  // } Driver Code Ends
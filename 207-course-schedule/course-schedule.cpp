class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto edge : prerequisites) {
            int v = edge[0];
            int u = edge[1];

            adj[u].push_back(v);
        }
        vector<int> vis(numCourses,0);
        vector<int> path(numCourses,0);
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(dfs(i,adj,vis,path)==true){
                    return false;
                }
            }
        }
        return true;
    }
    bool dfs(int node, vector<vector<int>>& adj, vector<int>& vis,vector<int>& path){

        vis[node]=1;
        path[node]=1;
        for(auto it : adj[node]){
            if(!vis[it]){
                if(dfs(it,adj,vis,path)==true){
                    return true;
                }
            }
            else if(path[it]){
                return true;
            }
        }
        path[node]=0;
        return false;
    }
};
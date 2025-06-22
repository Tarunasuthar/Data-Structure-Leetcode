class Solution {
public:
    bool dfs_check(int node,vector<bool> &visited,vector<bool> &dfs_v,vector<vector<int>>& adj){
        visited[node] = true;
        dfs_v[node] = true;

        for(int i=0;i<adj[node].size();i++){
            if(visited[adj[node][i]]==false){
               if(dfs_check(adj[node][i],visited,dfs_v,adj))
                 return true;
            }
            else{
                if(dfs_v[adj[node][i]]==true){
                    return true;
                }
            }
        }
        dfs_v[node] = false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        int size = prerequisites.size();
        for(int i=0;i<size;i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<bool> visited(numCourses,false);
        vector<bool> dfs_v(numCourses,false);

        for(int i=0;i<numCourses;i++){
            if(visited[i]==false){
               bool check = dfs_check(i,visited,dfs_v,adj);
               if(check==true)
               return false;
            }
        }
        return true;
    }
};
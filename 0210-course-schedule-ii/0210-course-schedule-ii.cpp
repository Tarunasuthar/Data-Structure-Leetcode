class Solution {
public:
    void t_sort(int node,vector<bool>& visited2,stack<int>& st,vector<vector<int>>& adj){
        visited2[node] = true;

        for(int i=0;i<adj[node].size();i++){
            if(visited2[adj[node][i]]==false){
                t_sort(adj[node][i],visited2,st,adj);
            }
        }
        st.push(node);
    }

    bool check_cycle(int node,vector<bool>&visited,vector<bool>& dfs_v,vector<vector<int>>&adj){
        visited[node] = true;
        dfs_v[node] = true;

        for(int i=0;i<adj[node].size();i++){
            if(visited[adj[node][i]]==false){
                if(check_cycle(adj[node][i],visited,dfs_v,adj))
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
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<bool> visited(numCourses,false);
        vector<bool> dfs_v(numCourses,false);
        vector<int> ans;
        stack<int> st;
        
        for(int i=0;i<numCourses;i++){
            if(visited[i]==false){
                bool check  = check_cycle(i,visited,dfs_v,adj);
                if(check == true){
                    return {};
                }
            }
        }
        vector<bool> visited2(numCourses,false);
        for(int i=0;i<numCourses;i++){
            if(visited2[i]==false){
                t_sort(i,visited2,st,adj);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
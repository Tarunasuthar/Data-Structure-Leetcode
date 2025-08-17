class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<bool> visited(n,false);
        map<int,vector<int>> edge;
        int size = paths.size();
        for(int i=0;i<size;i++){
            edge[paths[i][0]-1].push_back(paths[i][1]-1);
            edge[paths[i][1]-1].push_back(paths[i][0]-1);
        }
        queue<int> q;
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            if(visited[i]==false){
            ans[i] = 1;
            q.push(i);
            visited[i] = true;
            while(!q.empty()){
              int node = q.front();
              q.pop();
              for(int j=0;j<edge[node].size();j++){
                if(visited[edge[node][j]]==false){
                   ans[edge[node][j]] = ans[node]+1;
                   visited[edge[node][j]] = true;
                   q.push(edge[node][j]);
                }
                else if(ans[edge[node][j]]==ans[node]){
                    ans[edge[node][j]] = ans[node]+1;
                    q.push(edge[node][j]);
                }
                if(ans[edge[node][j]]>4){
                    ans[edge[node][j]] = ans[edge[node][j]]%4;
                }
              }
            }
         }
        }
        return ans;
    }
};
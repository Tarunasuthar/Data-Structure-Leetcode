class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> extra(n,vector<int>(m));
        int c = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    extra[i][j] = c;
                    c++;
                }
                else{
                    extra[i][j] = -1;
                }
            }
        }
        vector<vector<int>> adj(c);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                if(i>0 && grid[i-1][j]=='1'){
                    adj[extra[i][j]].push_back(extra[i-1][j]);
                }
                if(i<n-1 && grid[i+1][j]=='1'){
                    adj[extra[i][j]].push_back(extra[i+1][j]);
                }
                if(j>0 && grid[i][j-1]=='1'){
                    adj[extra[i][j]].push_back(extra[i][j-1]);
                }
                if(j<m-1 && grid[i][j+1]=='1'){
                    adj[extra[i][j]].push_back(extra[i][j+1]);
                }
            }
            }
        }
        int V = adj.size();
        queue<int> q;
        int count = 0;
        vector<bool> visited(V,false);
        for(int k=0;k<V;k++){
            if(visited[k]==false){
                q.push(k);
                visited[k] = true;
                while(!q.empty()){
                    int node = q.front();
                    q.pop();
                    for(int i=0;i<adj[node].size();i++){
                        if(visited[adj[node][i]]==false){
                            q.push(adj[node][i]);
                            visited[adj[node][i]] = true;
                        }
                    }
                }
            count++;
            }
        }
        return count;
    }
};
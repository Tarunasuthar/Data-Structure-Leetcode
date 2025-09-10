class Solution {
public:
    bool comman(vector<int>n1,vector<int>n2){
        map<int,int>mp1;
        for(int i=0;i<n1.size();i++){
            mp1[n1[i]]++;
        }
        for(int i=0;i<n2.size();i++){
            if(mp1.find(n2[i])!=mp1.end()){
                return true;
            }
        }
        return false;
    }
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        int l = languages.size();
        int f = friendships.size();
        set<int> st;
        for(int i=0;i<f;i++){
            int f1 = friendships[i][0];
            int f2 = friendships[i][1];
            if(comman(languages[f1-1],languages[f2-1])==false){
                st.insert(f1);
                st.insert(f2);
            }
        }
        if(st.empty()) return 0;
        int mini = INT_MAX;
        for(int i=1;i<n+1;i++){
            int need = 0;
            for(auto p:st){
                int flag = 0;
                for(int j=0;j<languages[p-1].size();j++){
                    if(languages[p-1][j]==i){
                        flag = 1;
                        break;
                    }
                }
                if(flag==0) need++;
            }
            mini = min(need,mini);
        }
        return mini;
    } 
};
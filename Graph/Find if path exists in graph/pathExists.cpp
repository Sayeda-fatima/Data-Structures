class Solution {
public:
    int find(int x, vector<int>& par){
        if(par[x]==-1)
            return x;
        return par[x]=find(par[x], par);
    }
    void unionset(int x, int y, vector<int>& par, vector<int>& rank){
        int s1=find(x,par);
        int s2=find(y, par);
        if(s1!=s2){
            if(rank[s1]>rank[s2]){
                par[s2]=s1;
                rank[s1]+=rank[s2];
            }
            else{
                par[s1]=s2;
                rank[s2]+=rank[s1];
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>par(n, -1);
        vector<int>rank(n, 1);
        for(int i=0; i<edges.size(); i++){
            int x=edges[i][0];
            int y=edges[i][1];
            unionset(x,y,par,rank);
        }
        int s1=find(source, par);
        int s2=find(destination, par);
        
        return s1==s2;
    }
};

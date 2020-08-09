class Solution {
public:
    int dx[4]={-1,1,0,0,};
    int dy[4]={0,0,-1,1};
    
    vector<vector<int>> grd;
    int ans=0,n,m;
    
    void bfs(){
        queue<pair<int,int>> qu;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grd[i][j]==2) qu.push({i,j});
        
        while(!qu.empty()){
            int sz=qu.size();
            bool pushed=false;
            
            //loop used to traverse all rotten oranges which are in queue
            for(int i=0;i<sz;i++){
                int x=qu.front().first,y=qu.front().second;
                qu.pop();
                for(int k=0;k<4;k++){
                    if(x+dx[k]<0 or y+dy[k]<0 or x+dx[k]>=grd.size() or y+dy[k]>=grd[0].size()) continue;
                    
                    if(grd[x+dx[k]][y+dy[k]]==1){
                        qu.push({x+dx[k],y+dy[k]}),pushed=true; 
                        grd[x+dx[k]][y+dy[k]]=2;    
                    } 
                }
            }
            
            if(pushed) ans++;
        }
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        grd=grid,n=grd.size(),m=grd[0].size();
        
        bfs();
        
        for(auto it:grd) 
            for(auto jt:it) 
                if(jt==1) return -1;
        
        return ans;
    }
};

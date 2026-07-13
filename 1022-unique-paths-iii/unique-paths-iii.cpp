class Solution {
public:
    int m;
    int n;
    int nonobstacle=0;
    int result;
    vector<vector<int>>directions={
        {-1,0},
        {0,1},
        {1,0},
        {0,-1}
    };
    void backtrack(vector<vector<int>>& grid,int i,int j,int count){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==-1 ){
            return;
        }
        if(grid[i][j]==2){
            if(count==nonobstacle)
            result++;
            return;
        }
        //bakcktrsck
        grid[i][j]=-1;
        for(auto it:directions){
            int new_i=i+it[0];
            int new_j=j+it[1];
            backtrack(grid,new_i,new_j,count+1);
        }
        grid[i][j]=0;

    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
        int start_x=0;
        int start_y=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    nonobstacle++;
                }
                if(grid[i][j]==1){
                    start_x=i;
                    start_y=j;
                }
            }
        }
        nonobstacle+=1;
        int count=0;
        backtrack(grid,start_x,start_y,count);
        return result;
    }
};
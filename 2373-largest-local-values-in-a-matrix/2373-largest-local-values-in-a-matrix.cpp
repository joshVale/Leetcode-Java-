class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {

        int n = grid.size();
        vector<vector<int>>ans(n-2,vector<int>(n-2,0));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                int maxV=0;

                for(int di=0;di<3;di++){
                    for(int dj=0;dj<3;dj++){
                        maxV = max(maxV,grid[i+di][j+dj]);
                    }
                }

             ans[i][j]=maxV;
            }
           
        }
         return ans;
    }
   
};
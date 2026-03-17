class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>tmp;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            tmp.push_back(sum);
        }
        int ans =*max_element(tmp.begin(),tmp.end());

        return ans;
    }
};
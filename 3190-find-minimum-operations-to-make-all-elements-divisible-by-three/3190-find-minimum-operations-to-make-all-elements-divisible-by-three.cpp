class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans=0;
        for(int i:nums){
            int res = i%3;
            ans+=min(res,3-res);
        }
        return ans;
    }
};
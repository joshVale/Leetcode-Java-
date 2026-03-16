class Solution {
public:
    int ans=0;
    void dfs(vector<int>& nums,int i,int currentXor){

        if(i==nums.size()){
            ans+=currentXor;
            return;
        }
        dfs(nums, i+1, currentXor^nums[i]);
        dfs(nums, i+1, currentXor);
    }

    int subsetXORSum(vector<int>& nums) {

        dfs(nums,0,0);
        return ans;

    }
};
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftSum ={0};
        vector<int>rightSum = {0};
        vector<int>ans;
        int sumleft = 0,sumright=0;
        for(int i=0;i<nums.size()-1;i++){
            sumleft+=nums[i];
            leftSum.push_back(sumleft);
        }
        for(int j=nums.size()-1;j>0;j--){
            sumright+=nums[j];
            rightSum.push_back(sumright);
        }
        int j=rightSum.size()-1;
        for(int i=0;i<leftSum.size();i++){
            ans.push_back(abs(leftSum[i]-rightSum[j]));
            j--;
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {

        unordered_map<int,int>tmp;
        vector<int>ans;
        for(int i:nums){
            tmp[i]++;
        }
        
        for(const auto& [key,value]:tmp){
            if(value>=2){
                ans.push_back(key);
            }
        }

        return ans;
    }
};
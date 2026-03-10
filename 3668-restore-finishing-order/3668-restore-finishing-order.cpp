class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>ans;
        unordered_set<int>tmp(friends.begin(),friends.end());
        for(int i:order){
            if(tmp.count(i))
            ans.push_back(i);
        }
        return ans;
    }
};
class Solution {
public:
    string reversePrefix(string s, int k) {
        string ans="";
        string tmp="";
        for(int i=k-1;i>=0;i--){
	        tmp+=s[i];
        }
        ans+=tmp;
        for(int i=k;i<s.size();i++){
            ans+=s[i];
        }
        return ans;
    }
};
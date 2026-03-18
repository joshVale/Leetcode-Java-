class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>sets(allowed.begin(),allowed.end());
        int count=0;
        for(string s: words){
            bool ok = true;
            for(char c:s){
                if(sets.find(c)==sets.end()){
                    ok=false;
                    break;
                }
            }
            if(ok)count++;
        }

        return count;
    }
};
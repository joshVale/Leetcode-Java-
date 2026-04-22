class Solution {
public:
    int maxDistinct(string s) {
        set<char>sl;
        for(char i:s)
            sl.insert(i);
        return sl.size();
        
    }
};
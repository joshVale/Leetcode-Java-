#include<string>
#include<cmath>

class Solution {
public:
    int findPermutationDifference(string s, string t) {

        int sum=0;
        for(int i=0;i<s.size();i++){
            sum+=abs(i-(int)t.find(s[i]));
        }
        return sum;
    }
};
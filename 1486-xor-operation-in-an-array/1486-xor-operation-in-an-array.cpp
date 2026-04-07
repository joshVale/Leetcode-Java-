class Solution {
public:
    int xorOperation(int n, int start) {
    int nums[n];
    for(int i=0;i<n;i++){
        nums[i]=start+2*i;
    }
    int tmp=nums[0];
    for(int i=1;i<n;i++){
        tmp^=nums[i];
    }
    return tmp;
    }
};
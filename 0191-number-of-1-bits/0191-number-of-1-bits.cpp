class Solution {
public:
    int hammingWeight(uint32_t n) {
    int mask=1,count=0;
       while(n!=0)
       {
           count+=(n%2)&1;
           n=n>>1;
       }
        return count;
        
    }
    
};
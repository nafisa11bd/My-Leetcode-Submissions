class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>binary(n+1);
        binary[0]=0;
        for(int i=1;i<=n;i++)
        {
            binary[i]=binary[i/2]+i%2;
        }
        return binary; 
        
        
    }
};
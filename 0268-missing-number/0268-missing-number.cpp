class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int>p;
        for(int i=0;i<nums.size();i++)
        {
            p[nums[i]]++;
        }
        for(int i=0;i<=nums.size();i++)
        {
            if(p[i]==0)
                return i;
        }
        return 0;
    }
};
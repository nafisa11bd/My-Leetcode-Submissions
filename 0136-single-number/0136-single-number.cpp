class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>p;
        for(int i=0;i<nums.size();i++)
        {
            p[nums[i]]++;
        }
        int var;
        for(int i=0;i<nums.size();i++)
        {
            if(p[nums[i]]==1)
                var=nums[i];
        }
        return var;
    }
};
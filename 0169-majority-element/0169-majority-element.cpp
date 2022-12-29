class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>p;
        for(int i=0;i<nums.size();i++)
        {
          p[nums[i]]++;  
        }
        for(auto i=p.begin();i!=p.end();i++)
        {
            if(i->second>nums.size()/2)
                return i->first;
        }
        return 0;
    }
};
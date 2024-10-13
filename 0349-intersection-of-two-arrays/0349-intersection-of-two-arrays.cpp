class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>main(nums1.begin(),nums1.end());
        unordered_set<int>result;
        for(auto it:nums2)
        {
            if(main.contains(it))
            {
                result.insert(it);
            }
        }
        vector<int> final(result.begin(),result.end());
        return final;
    }
};
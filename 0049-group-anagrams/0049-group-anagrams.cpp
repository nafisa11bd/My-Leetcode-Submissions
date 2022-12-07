class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>mymap;
        for(int i=0;i<strs.size();i++)
        {
            string temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mymap[strs[i]].push_back(temp);
        }
        vector<vector<string>>anagram;
        for(auto itr=mymap.begin();itr!=mymap.end();itr++)
        {
            anagram.push_back(itr->second);
        }
        return anagram;
    }
};
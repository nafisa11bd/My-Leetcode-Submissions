class Solution
{
    public:
        int lengthOfLongestSubstring(string s) {
            int a_pointer=0;
            int b_pointer=0;
            size_t lonng=0;
            set<char>repeat;
            
            while(b_pointer<s.size())
            {
                auto it=repeat.find(s[b_pointer]);
                if(it==repeat.end())
                {
                    repeat.insert(s[b_pointer]);
                    lonng=max(lonng,repeat.size());
                    b_pointer++;
                }
                else
                {
                    repeat.erase(s[a_pointer]);
                    a_pointer++;
                }
                
            }
            return lonng;
        }
};
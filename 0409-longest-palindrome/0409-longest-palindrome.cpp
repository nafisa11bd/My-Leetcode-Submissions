class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> count;
        bool odd=false;
        int result=0;
        for(int i=0;i<s.length();i++)
        {
            count[s[i]]++;
        }
        for(auto i=count.begin();i!=count.end();i++)
        {
            if(i->second%2==0)
            result+=i->second;
            else{
                result+=(i->second)-1;
                odd=true;
                
            }
                
        }
        if(odd==true)
            result=result+1;
        return result;    
        
    }
};
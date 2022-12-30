class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string u,v;
        int space1=0,space2=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='#')
            {
                space1++;
            }
            else if(space1>0)
            {
                //i--;
                space1--;
            }
            else if(space1==0 && s[i]!='#')
            {
                u+=s[i];
            }
            
                
        }
        
        for(int i=t.length()-1;i>=0;i--)
        {
            if(t[i]=='#')
            {
                space2++;
            }
            else if(space2>0)
            {
                //i--;
                space2--;
            }
            else if(space2==0 && t[i]!='#')
            {
                v+=t[i];
            }
                
        }
        if(u==v)
            return true;
        else
            return false;
        
    }
};
class Solution {
public:
    void reverseString(vector<char>& s) {
        char x;
        int i=0,j=s.size()-1;
        while(i<j)
        {
            x=s[i];
            s[i]=s[j];
            s[j]=x;
            i++;
            j--;
        }

        
    }
};
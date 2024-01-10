class Solution {
public:
    bool isAnagram(string s, string t) {
         int i,c=1;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.size()==t.size())
        {
        for(i=0;i<s.size();i++)
        {
            if(s[i]!=t[i])
            {
                c=0;
                break;
            }
        }
        }
        else
        c=0;
        return c;
    }
};
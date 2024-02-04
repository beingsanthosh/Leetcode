class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int>mp;
        for(auto i:t)
        {
            mp[i]++;
        }
        int n=s.size();
        int i=0,j=0,c=t.size(),mins=0,minlen=INT_MAX;
        while(j<n)
        {
            if(mp[s[j]]>0)
            {
                c--;
            }
            mp[s[j]]--;
            j++;
            while(c==0)
            {
            if(j-i < minlen)
            {
                mins=i;
                minlen=j-i;
            }
            
            mp[s[i]]++;
            if(mp[s[i]]>0)
            {
                c++;
            }
            i++;
            }
        }
        return minlen!=INT_MAX ? s.substr(mins,minlen) : "";

    }
};
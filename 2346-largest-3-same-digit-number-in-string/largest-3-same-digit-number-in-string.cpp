class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        int maxx=-1,f=1;
        for(int i=0;i<=n-3;i++)
        {
            char k=num[i];
            int s;
            if(num[i]==num[i+1] and num[i]==num[i+2])
            {
                f=0;
                s=((k-'0')*100)+((k-'0')*10)+((k-'0')*1);
            }
            maxx=max(s,maxx);
        }
        if(maxx==0)
        {
            return "000";
        }
        else if(f==1)
        {
            return "";
        }
        return to_string(maxx);
    }
};
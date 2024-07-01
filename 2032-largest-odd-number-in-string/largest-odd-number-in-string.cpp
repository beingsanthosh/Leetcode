class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int ind;
        for(int i=n-1;i>=0;i--)
{
            if((num[i]-'0')%2!=0)
            {
                ind=i;
                break;
            }
        }
        string a;
        for(int i=0;i<=ind;i++)
        {
            a+=num[i];
        }
        return a;
    }
};
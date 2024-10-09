class Solution {
public:
    bool isPalindrome(int x) {
        long long int t=x,n=x;
        if(t<0)
        {
            return false;
        }
        long long int s=0;
        while(t!=0)
        {
            int r=t%10;
            s=s*10+r;
            t=t/10;
        }
        if(s==n)
        {
            return true;
        }
        return false;
    }
};
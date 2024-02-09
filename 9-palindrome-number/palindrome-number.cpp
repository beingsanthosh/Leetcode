class Solution {
public:
    bool isPalindrome(int x) {
        long long int t=x;
        if(x<0) 
        {
            return false;
        }
        else
        {
            long long int ans=0;
            while(x)
            {
                ans=ans*10+(x%10);
                x=x/10;
            }
            if(ans==t)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};
class Solution {
public:
    bool lemonadeChange(vector<int>&arr) {
        int f=0,ten=0,tt=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==5)
            {
                f++;
            }
            else if(arr[i]==10)
            {
                if(f)
                {
                    f--;
                    ten++;
                }
                else
                {
                    return false;
                }
            }
            else if(arr[i]==20)
            {
                if(f and ten)
                {
                    f-=1;
                    ten-=1;
                    tt++;
                }
                else if(f>=3)
                {
                   f-=3;
                }  
                else
                {
                    return false;
                }
            }
        }
        return true;

    }
};
class Solution {
public:
    vector<int> singleNumber(vector<int>& arr) {
        int x=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            x=x^arr[i];
        }
        int c=0;
        while(x)
        {
            if(x&1)
            {
                break;
            }
            c++;
            x=x>>1;
        }
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if((arr[i]&(1<<c)))
            {
                a=a^arr[i];
            }
            else
            {
                b=b^arr[i];
            }
        }
        return {a,b};
    }
};
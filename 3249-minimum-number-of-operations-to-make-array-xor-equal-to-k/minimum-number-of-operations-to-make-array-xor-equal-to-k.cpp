class Solution {
public:
    int minOperations(vector<int>& arr, int k) {
        int n=arr.size();
        int s=0;
        for(int i=0;i<n;i++)
        {
            s=s^arr[i];
        }
        int a=s^k;
        int c=0;
        while(a)
        {
            if(a&1)
            {
                c++;
                
            }
            a=a>>1;
        }
        return c;
    }
};
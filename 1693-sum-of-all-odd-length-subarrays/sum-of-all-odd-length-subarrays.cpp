class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int s=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if((j-i+1)%2==1)
                {
                    for(int k=i;k<=j;k++)
                    {
                        s+=arr[k];
                    }
                }
            }
        }
        return s;
    }
};
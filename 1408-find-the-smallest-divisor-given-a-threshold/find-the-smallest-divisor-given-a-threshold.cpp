class Solution {
public:
int findMax(vector<int> &arr, int n)
    {
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxi = max(arr[i], maxi);
        }
        return maxi;
    }
    int fun(vector<int>arr,int mid)
    {
        int minValue=0;
        for(int i=0;i<arr.size();i++)
        {
            minValue+= ceil((double)arr[i]/ (double)mid);
        }
        return minValue;
    }
    int smallestDivisor(vector<int>& arr, int t) {
        int l=1,ans=-1;
        int n=arr.size();
        int r=findMax(arr,n);
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(fun(arr,m)<=t)
            {
                ans=m;
                r=m-1;
            }  
          else
            {
                l=m+1;
            }
        }
        return ans;
    }
};
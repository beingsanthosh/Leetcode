class Solution {
public:
    int findMin(vector<int>& arr) {
        int minn=INT_MAX;
        int n=arr.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(arr[l]<=arr[m])
            {
                minn=min(arr[l],minn);
                l=m+1;
            }
            else
            {
                minn=min(arr[m],minn);
                r=m-1;
            }
        }
        return minn;

    }
};
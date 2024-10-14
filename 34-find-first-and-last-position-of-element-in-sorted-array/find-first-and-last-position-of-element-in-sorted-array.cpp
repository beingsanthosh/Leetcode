int first(vector<int>arr,int t)
{
    int n=arr.size();
    int l=0,r=n-1;
    int ans=-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(arr[m]==t)
        {
            r=m-1;
            ans=m;
        }
        else if(t>arr[m])
        {
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    return ans;
}
int last(vector<int>arr,int t)
{
    int n=arr.size();
    int l=0,r=n-1;
    int ans=-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(arr[m]==t)
        {
            l=m+1;
            ans=m;
        }
        else if(t>arr[m])
        {
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    return ans;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        int a=first(nums,t);
        int b=last(nums,t);
        return {a,b};
    }
};
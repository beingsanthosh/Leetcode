class Solution {
public:
    int occ1(vector<int>vet,int t)
    {
        int n=vet.size();
        int l=0,r=n-1,ans=-1;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(vet[m]==t)
            {
                ans=m;
                r=m-1;
            }
            else if(vet[m]<t)
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
    int occ2(vector<int>vet,int t)
    {
        int n=vet.size();
        int l=0,r=n-1;
        int ans=-1;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(vet[m]==t)
            {
                ans=m;
                l=m+1;
            }
            else if(vet[m]<t)
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
    vector<int> searchRange(vector<int>& arr, int t) {
        int n=arr.size();
        int l=0,r=n-1;
        int fir=occ1(arr,t);
        int sec=occ2(arr,t);
        return {fir,sec};
    }
};
class Solution {
public:
    int waysToSplitArray(vector<int>& arr) {
        long long int n=arr.size();
        long long int s=0;
        long long int p=0;
        long long int c=0;
        s=accumulate(arr.begin(),arr.end(),0LL);
        for(long long int i=0;i<n-1;i++)
        {
            p+=arr[i];
            if(p>=(s-p))
            {
                c++;
            }
        }
        return c;
        
    }
};
class Solution {
public:
    int missingInteger(vector<int>& arr) {
        int n=arr.size();
        int s=arr[0];
        int maxx=INT_MIN;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1]+1)
            {
                s+=arr[i];
            }
            else
            {
                break;
            }
        }
        maxx=s;
        int ans=0;
        bool flag=true;
        while(flag)
        {
            auto it=find(arr.begin(),arr.end(),maxx);
            if(it==arr.end())
            {
                ans=maxx;
                flag=false;
            }
            else
            {
                maxx++;
            }
        }
        return ans;
        
        
    }
};
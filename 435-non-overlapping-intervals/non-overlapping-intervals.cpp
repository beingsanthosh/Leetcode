 bool comp(vector<int>&a,vector<int>&b)
    {
        return a[1]<b[1];
    }
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end(),comp);
        int end=arr[0][1];
        int del=0;
        for(int i=1;i<n;i++)
        {
            if(end>arr[i][0])
            {
                del++;
            }
            else
            {
                end=arr[i][1];
            }
        }
        return del;
        
    }
};
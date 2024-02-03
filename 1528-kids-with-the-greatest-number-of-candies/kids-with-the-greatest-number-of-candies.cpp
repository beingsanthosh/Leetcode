class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& arr, int k) {
        vector<bool>vet;
        int n=arr.size();
        int maxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxx=max(maxx,arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]+k>=maxx)
            {
                vet.push_back(true);
            }
            else
            {
                vet.push_back(false);
            }
        }
        return vet;

    }
};
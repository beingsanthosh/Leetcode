class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& arr, int k) {
        int n=arr.size();
        vector<bool>vet;
        int a=0;
        for(int i=0;i<n;i++)
        {
            int f=0;
            for(int j=0;j<n;j++)
            {
                if(i!=j and (arr[j]>arr[i]+k))
                {
                    f=1;
                }
            }
            if(f==1)
            {
                vet.push_back(false);
            }
            else
            {
                vet.push_back(true);
            }
        }
        return vet;

    }
};
class Solution {
public:
    vector<int> decode(vector<int>& en, int s) {
        int n=en.size();
        vector<int>arr(n+1,0);
        arr[0]=s;
        for(int i=0;i<n;i++)
        {
            arr[i+1]=en[i]^arr[i];
        }
        return arr;
    }
};
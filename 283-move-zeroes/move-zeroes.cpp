class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int c=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                swap(arr[c],arr[i]);
                c++;
            }
        }
    }
};
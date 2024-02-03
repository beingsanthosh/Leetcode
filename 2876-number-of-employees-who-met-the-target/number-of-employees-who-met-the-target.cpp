class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& arr, int k) {
        int c=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>=k)
            {
                c++;
            }
        }
        return c;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int ele=0,c=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(c==0)
            {
                ele=arr[i];
                c++;
            }
            else if(arr[i]==ele)
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        return ele;
    }
};
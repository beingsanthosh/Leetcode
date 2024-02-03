class Solution {
public:
    int countMatches(vector<vector<string>>& arr, string a, string b) {
        int c=0;
        if(a=="type")
        {
            for(int i=0;i<arr.size();i++)
            {
               if(arr[i][0]==b)
               {
                   c++;
               }
            }
        }
        else if(a=="color")
        {
            for(int i=0;i<arr.size();i++)
            {
               if(arr[i][1]==b)
               {
                   c++;
               }
            }
        }
        else
        {
            for(int i=0;i<arr.size();i++)
            {
               if(arr[i][2]==b)
               {
                   c++;
               }
            }
        }
        return c;
    }
};
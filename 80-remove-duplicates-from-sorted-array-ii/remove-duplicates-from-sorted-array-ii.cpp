class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        int j=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]]<2)
            {
                nums[j]=nums[i];
                j++;
                mp[nums[i]]++;
            }
            else
            {
                mp[nums[i]]++;
            }
        }
        return j;
        
    }
};
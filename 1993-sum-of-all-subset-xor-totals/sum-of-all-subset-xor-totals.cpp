class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int a=0,b=0;
        int n=nums.size();
	int s=pow(2,n);
	for(int i=0;i<s;i++)
	{
		a=0;
		for(int j=0;j<n;j++)
		{
			if((i&(1<<j)))
			{
				a=a^nums[j];
			}
		}
		b+=a;
	}
	return b;
    }
};
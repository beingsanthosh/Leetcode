class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n=arr.size();
        int c1=0,c2=0,e1,e2;
        for(int i=0;i<n;i++)
        {
            if(c1==0 and arr[i]!=e2)
            {
                c1=1;
                e1=arr[i];
            }
            else if(c2==0 and arr[i]!=e1)
            {
                c2=1;
                e2=arr[i];
            }
            else if(arr[i]==e1)
            {
                c1++;
            }
            else if(arr[i]==e2)
            {
                c2++;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        vector<int>vet;
        int m=(int)(n/3)+1;
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==e1) a++;
            if(arr[i]==e2) b++;
        }
        if(e1==e2)
        {
            return {e1};
        }
        if(a>=m) vet.push_back(e1);
        if(b>=m) vet.push_back(e2);
        return vet;
    }
};
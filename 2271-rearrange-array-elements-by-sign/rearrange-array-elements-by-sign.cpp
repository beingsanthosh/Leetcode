class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();
        int pos=0,neg=1;
        vector<int>vet(n,0);
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                vet[neg]=arr[i];
                neg+=2;
            }
            else
            {
                vet[pos]=arr[i];
                pos+=2;
            }
        }
        return vet;

    }
};
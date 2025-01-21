class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>vet;
        int n=arr.size();
        int maxx=-1;
        for(int i=n-1;i>=0;i--)
        {
            vet.push_back(maxx);
            maxx=max(maxx,arr[i]);
        }
        for(int i=0;i<vet.size();i++)
        {
            cout<<vet[i]<<" ";
        }
        reverse(vet.begin(),vet.end());
        return vet;
    }
};
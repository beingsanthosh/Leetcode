class Solution {
public:
    vector<int> findWordsContaining(vector<string>& arr, char x) 
    {
        vector<int>vet;
        for(int i=0;i<arr.size();i++)
        {
            string a=arr[i];
            auto k=find(a.begin(),a.end(),x);
            if(k!=a.end())
            {
                vet.push_back(i);
            }
        }
        return vet;
        
    }
};
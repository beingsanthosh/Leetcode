class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>vet;
        string s="123456789";
        for(int i=2;i<=s.size();i++)
        {
            for(int j=0;j<=s.size()-i;j++)
            {
                string k=s.substr(j,i);
                int a=stoi(k);
                if(a>=low && a<=high) vet.push_back(a);
            }
        }
        return vet;

    }
};
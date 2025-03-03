class Solution {
public:
    vector<int> intersect(vector<int>& n1, vector<int>& n2) {
        int n=n1.size();
        int m=n2.size();
        sort(n1.begin(),n1.end());
        sort(n2.begin(),n2.end());
        int i=0,j=0;
        vector<int>vet;
        while(i<n and j<m)
        {
            if(n1[i]==n2[j])
            {
                vet.push_back(n1[i]);
                i++;
                j++;
            }
            else if(n1[i]>n2[j])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        return vet;
    }
};
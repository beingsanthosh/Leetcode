class Solution {
public:
    vector<int> vowelStrings(vector<string>& w, vector<vector<int>>& q) {
        int n=w.size();
        vector<int>vet(n+1,0);
        for(int i=0;i<n;i++)
        {
            string a=w[i];
            int k=a.size();
            if(k==1)
            {
                if(a[0]=='a' or a[0]=='e' or a[0]=='i' or a[0]=='o' or a[0]=='u')
                {
                    vet[i]=1;
                }
            }
            else if((a[0]=='a' or a[0]=='e' or a[0]=='i' or a[0]=='o' or a[0]=='u') and (a[k-1]=='a' or a[k-1]=='e' or a[k-1]=='i' or a[k-1]=='o' or a[k-1]=='u'))
            {
                vet[i]=1;
            }
        }
        int r=q.size();
        vector<int> prefixSum(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefixSum[i + 1] = prefixSum[i] + vet[i];
        }

        // Answer each query
        vector<int> ans;
        for (const auto& query : q) {
            int s = query[0];
            int e = query[1];
            ans.push_back(prefixSum[e + 1] - prefixSum[s]);
        }

        return ans;
        
    }
};
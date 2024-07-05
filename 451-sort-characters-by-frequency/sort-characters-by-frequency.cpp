class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        vector<pair<char,int>>vet(mp.begin(),mp.end());
        sort(vet.begin(), vet.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second; // Sort in descending order of frequency
    });
    string result;
    for (const auto& p : vet) {
        result += string(p.second, p.first); // Append character p.first, p.second times
    }

    return result;
    }
};
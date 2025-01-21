class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int n = emails.size();
        map<string, int> mp;

        for (int i = 0; i < n; i++) {
            string s = emails[i];
            int m = s.size();
            string mailloc = "";
            string maildom = "";
            int ind = -1;

            // Find the position of '@' to separate local and domain
            for (int b = 0; b < m; b++) {
                if (s[b] == '@') {
                    ind = b;
                    break;
                }
            }

            // Process the local name
            for (int j = 0; j < ind; j++) {
                if (s[j] == '.') {
                    continue; // Ignore periods in the local name
                } else if (s[j] == '+') {
                    break; // Ignore everything after the first '+'
                } else {
                    mailloc += s[j];
                }
            }

            // Process the domain name (no special rules apply here)
            for (int j = ind + 1; j < m; j++) {
                maildom += s[j];
            }

            // Combine the processed local name and domain name with '@'
            string mail = mailloc + "@" + maildom;
            mp[mail]++;
        }

        // Return the count of unique emails
        return mp.size();
    }
};

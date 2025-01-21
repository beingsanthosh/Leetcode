class Solution {
public:
    int maxNumberOfBalloons(string t) {
       map<char, int> freq;
        for (char c : t) {
            freq[c]++;
        }
        
        // Calculate the number of instances of each required character
        int b = freq['b'];
        int a = freq['a'];
        int l = freq['l'] / 2; // 'l' is needed twice in "balloon"
        int o = freq['o'] / 2; // 'o' is needed twice in "balloon"
        int n = freq['n'];
        
        // The maximum number of "balloon" instances is determined by the limiting character
        return min({b, a, l, o, n});


        
    }
};
class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(!st.empty())
            {
                if(isdigit(s[i]))
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        string ss="";
        while(!st.empty())
        {
            ss+=st.top();
            st.pop();
        }
        reverse(ss.begin(),ss.end());
        return ss;
    }
};
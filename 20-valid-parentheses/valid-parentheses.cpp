class Solution {
public:
    bool isValid(string s) {
    // int n=s.size();
    stack<char>st;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(' or s[i]=='{' or s[i]=='[')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty() or (s[i]==')' and st.top()!='(') or (s[i]=='}' and st.top()!='{') or (s[i]==']' and st.top()!='['))
            {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();

        
    }
};
class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(s[i]=='(' or s[i]=='[' or s[i]=='{')
            {
                st.push(s[i]);
            }
            else if((s[i]==')' and st.top()=='(') or (s[i]==']' and st.top()=='[') or (s[i]=='}' and st.top()=='{'))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        return st.empty();
    }   
    
};
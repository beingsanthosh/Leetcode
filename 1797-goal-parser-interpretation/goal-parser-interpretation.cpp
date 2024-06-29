class Solution {
public:
    string interpret(string s) {
        string a="";
        int n=s.size();
        int i=0;
        while(i<n)
        {
            if(s[i]=='G')
            {
                a+='G';
                i++;
            }
            else if(s[i]=='(')
            {
                if(s[i+1]==')')
                {
                    a+='o';
                    i+=2;
                }
                else
                {
                    a+="al";
                    i+=4;
                }

            }
        }
        return a;
        
    }
};
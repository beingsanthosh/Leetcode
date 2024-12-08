class Solution {
public:
    int romanToInt(string arr) {
        map<char,int>mp;
        int n=arr.size();

        mp['I']=1;
         mp['V']=5;
          mp['X']=10;
           mp['L']=50;
            mp['C']=100; 
            mp['D']=500;
             mp['M']=1000;
            if(n==1)
            {
                return mp[arr[0]];
            }
            int s=0,i=0;
        while(i<n-1)
        {
            if(mp[arr[i]]<mp[arr[i+1]])
            {
                s+=(mp[arr[i+1]]-mp[arr[i]]);
                i+=2;
            }
            else
        {
            s+=mp[arr[i]];
            i++;
        }
        }
        if(mp[arr[n-1]]<=mp[arr[n-2]])
        {
            s+=mp[arr[n-1]];
        }
        return s;
        

    }
};
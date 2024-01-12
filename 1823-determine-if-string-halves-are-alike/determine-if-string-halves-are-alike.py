class Solution(object):
    def halvesAreAlike(self, s):
        """
        :type s: str
        :rtype: bool
        """
        a=""
        b=""
        c=0
        d=0
        for i in range(len(s)/2):
            a+=s[i]
        for i in range(len(s)/2,len(s)):
            b+=s[i]
        for i in a:
            if i in "aeiouAEIOU":
                c+=1
        for i in b:
            if i in "aeiouAEIOU":
                d+=1
        if(c==d):
            return True
        else:
            return False
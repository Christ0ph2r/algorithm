class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;

        for(int i=0; i<t.length(); i++){
            if(t[i] == s[j]){
                j++;
            }
        }

        if(j==s.length())
            return true;  
        return false;
    }
};

/*
S length is always less than t
So all I have to do is to check string s.
We just check all s of elements sequencely in t string.
If we find out a element of s in t, we will add j
Finally we check j counted and s length
*/
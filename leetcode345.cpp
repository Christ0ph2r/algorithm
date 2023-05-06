class Solution {
public:
    string reverseVowels(string s) {
        // Vowel : a e i o u
        vector<char> vowelsPos;

        for(int i=0 ;i<s.length(); i++){
            if(s[i] == 'a' || s[i] == 'e' ||
                s[i] == 'i' || s[i] == 'o' ||
                    s[i] == 'u' || s[i] == 'A' ||
                        s[i] == 'E' || s[i] == 'I' ||
                            s[i] == 'O' || s[i] == 'U')
                    {
                        vowelsPos.push_back(s[i]);
                    }
        }

        for(int i=0 ;i<s.length(); i++){
            if(s[i] == 'a' || s[i] == 'e' ||
                s[i] == 'i' || s[i] == 'o' ||
                    s[i] == 'u' || s[i] == 'A' ||
                        s[i] == 'E' || s[i] == 'I' ||
                            s[i] == 'O' || s[i] == 'U')
                    {
                        s[i] = vowelsPos.back();
                        vowelsPos.pop_back();
                    }
        }

        return s;
    }
};

/*





*/
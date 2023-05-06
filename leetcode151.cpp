#include<ctype.h>

class Solution {
private:
    std::string trim(const std::string& s)
    {
    if(s.length() == 0)
        return s;

    std::size_t beg = s.find_first_not_of(" \a\b\f\n\r\t\v");
    std::size_t end = s.find_last_not_of(" \a\b\f\n\r\t\v");
    if(beg == std::string::npos) // No non-spaces
        return "";

    return std::string(s, beg, end - beg + 1);
    }

    vector<string> split(string str, char Delimiter) {
        istringstream iss(str);
        string buffer;
        vector<string> result;
        while (getline(iss, buffer, Delimiter)) {
            result.push_back(buffer);
        }
        return result;
    }
public:
    string reverseWords(string s) {
        vector<string> splitString = split(s, ' ');
        string res = "";
        for(int i=splitString.size()-1; i>=0; i--){
            if(trim(splitString[i]).size() == 0)
                continue;
            res += splitString[i];
            if(i != 0)
                res += " ";
        }
        return trim(res);
    }
};
class Solution {
private:
    int Gcd(int a , int b)
    {
        int A = max(a, b);
        int B = min(a, b);
        
        while(A % B != 0)
        {
            int R = A % B;
            A = B;
            B = R;
        }
        return B;
    }


public:
    string gcdOfStrings(string str1, string str2) {
        // string result = 0;
        // int i = 0;
        // int j = 0;
        // while(str1.length() > i && str2.length() > i){
        //     if(str1[i] != str2[i])
        //         return "";
        //     result += str1[i];
        //     i++;
        // }
        // if(str1.length()%i == 0 && str2.length()%i == 0)
        //     return result;
        int gcdValue = Gcd(str1.length(), str2.length());   
        for(int i=0; i<gcdValue; i++){
            if(str1[i] != str2[i])
                return "";
        }
        string gcdStr = str1.substr(0, gcdValue);
        for(int i=gcdValue; i<str1.length(); i+=gcdValue){
            if(str1.substr(i, gcdValue) != gcdStr)
                return "";
        }
        for(int i=gcdValue; i<str2.length(); i+=gcdValue){
            if(str2.substr(i, gcdValue) != gcdStr)
                return "";
        }
        
        return gcdStr;
    }
};
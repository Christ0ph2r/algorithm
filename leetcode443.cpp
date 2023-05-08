class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> compressVec;
        char last;
        int count = 0;
        if(chars.size()>=1){
            last = chars[0];
            count = 1;
            compressVec.push_back(last);
        }
            
        for(int i=1; i<chars.size(); i++){
            if(last == chars[i])
                count++;
            else{
                if(count > 1){
                    vector<int> digits;
                    while(count != 0){
                        digits.push_back(count%10);
                        count /= 10;
                    }
                    reverse(digits.begin(), digits.end());
                    for(int j=0; j<digits.size();j++){
                        cout << digits[j] << endl;
                        compressVec.push_back((char)(digits[j]+48));
                    }
                }
                last = chars[i];
                compressVec.push_back(last);
                count = 1;
            }
        }
        if(count > 1){
            vector<int> digits;
            while(count != 0){
                digits.push_back(count%10);
                count /= 10;
            }
            reverse(digits.begin(), digits.end());
            for(int j=0; j<digits.size();j++){
                cout << digits[j] << endl;
                compressVec.push_back((char)(digits[j]+48));
            }
        }

        chars = compressVec;

        return compressVec.size();
    }
};

/*

Beats 22.15%

*/
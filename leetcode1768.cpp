class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string resultWord;
        while(i < word1.length() && j < word2.length()){
            resultWord += word1[i++];
            resultWord += word2[j++];
        }

        if(i == word1.length()){
            for(int t=j; t<word2.length(); t++){
                resultWord += word2[t];
            }
        }

        if(j == word2.length()){
            for(int t=i ; t<word1.length(); t++){
                resultWord += word1[t];
            }
        }

        return resultWord;
    }
};

/*
Repeat 
단어 두개를 주고 이것들을 합치려고 한다.
합칠때는 순서대로 합치는데
word1 하나 -> word2 하나 -> word1하나
시작 단어는 word1의 첫글자로 한다.
만약 하나 문자열이 먼저 끝날 경우 남은 문자열을 뒤에 붙입니다.

Example
예를 들면 word1이 apple이고 word2가 orange일 경우
word1의 첫 글자인 a를 시작으로
word2의 첫 글자인 o
그 다음은 word1의 p 그 다음은 word2의 r
따라서 a o p r p a l n e g가 된다.
다음에 word1이 끝났으나 word2의 e가 남았으니
맨 뒤의 단어는 e가 된다.

Approach


*/
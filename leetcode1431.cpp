class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int biggestCandy = 0;
        vector<bool> result;

        for(int i=0; i<candies.size(); i++){
            biggestCandy = max(candies[i], biggestCandy);
        }
        for(int i=0; i<candies.size(); i++){
            if(biggestCandy > candies[i]+extraCandies)
                result.push_back(false);
            else
                result.push_back(true);
        }

        return result;
    }
};
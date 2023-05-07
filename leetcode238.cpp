class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        int productAll = 1;
        int isZero = 0;
        for(int i=0; i<nums.size();i++){
            if(nums[i] == 0){
                isZero++;
                continue;
            }
            productAll *= nums[i];
        }

        for(int i=0; i<nums.size();i++){
            if(isZero > 1){
                answer.push_back(0);
            }else if(isZero == 1){
                if(nums[i] == 0){
                    answer.push_back(productAll);
                }else
                    answer.push_back(0);
            }else{
                answer.push_back(productAll/nums[i]);
            }
        }

        return answer;

    }
};
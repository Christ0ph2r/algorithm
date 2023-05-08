class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int end = nums.size();
        for(int i=0; i<end; i++){
            if(nums[i] == 0){
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                end--;
                i--;
            }
        }
    }
};

/*
Beats 8.77%

*/
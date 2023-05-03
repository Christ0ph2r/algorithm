class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int temp = 0;
        for(int i=0; i<nums.size(); i++){
            nums[i] += temp;
            temp = nums[i];
        }

        return nums;
    }
};

/*
Hi everyone
I'm christopher.
I'm going to talk about this problem.
How to sort out and how to make a code

Ok.
Let me read the description.
Input is an array nums in vector.
And output is also vector with integer

We define a running sum of an array as running sum i is equal to all sum of array nums 0 to i
I make loop to cacluate array nums 0 to i
So this mean I store sum 0 to i when loop is step i-1
For me, I store sums to variable nums[i]
Eventually, nums[i] get sums 0 to i

*/
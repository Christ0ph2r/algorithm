class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int result = (right-left)*min(height[right], height[left]);

        while(right > left){
            if(height[right] > height[left]){
                left+=1;
            }else{
                right-=1;
            }
            result = max((right-left)*min(height[right], height[left]),result);
        }
        return result;
    }
};

/*
https://www.youtube.com/watch?v=UuiTKBwPgAo

*/
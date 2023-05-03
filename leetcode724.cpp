class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int pivotIndex = -1;
        int temp = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
        }

        for(int i=0; i<nums.size(); i++){
            if(temp == sum-temp-nums[i]){
                pivotIndex = i;
                break;
            }
            temp += nums[i];
        }
        return pivotIndex;
    }
};

/*
이 문제는 배열 중 하나 요소를 피벗으로 삼고
피벗을 기준으로 왼쪽 오른쪽을 나눠 합이 같은 피벗을 구하는 문제입니다.
예를들어 10개 요소가 있는 배열의 경우
4를 피벗으로 삼았을 때 0~3의 합과 5~9의 합이 같은지 확인해야합니다.

일단 배열 요소의 총합을 구해야합니다.
loop문으로 먼저 배열 총합을 구합니다.
총합을 구한뒤 우리는 왼쪽 값들과 오른쪽 값들을 비교하면서 
올바른 피벗위치를 찾기 위한 loop문을 하나 더 사용해줍니다.
변수 temp는 왼쪽값들이 담겨있고
오른쪽 값들은 총합에 왼쪽값들과 현재 피벗 위치 값을 빼서 구할 수 있습니다.
이를 활용해서 loop문을 구하고 정답을 얻습니다.

This problem is to find out pivot as element sum of left elements is equeal sum of right elements.
For example, if we have 10 elements and set pivot as element number 4,
we have to check that sum 0 to 3 is equal to 5 to 9.

First of all, we're going to get a sum of elements with loop
After I get sum of all elements, 
We make another loop to find out our result as position of pivot.
Varaible temp is the values of left elements and 
the value of right elements is sum of all elements minus left values and the pivot value.
Finally, We're going to get the result with this loop.

*/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int flowerN = flowerbed.size();
        for(int i=0; i<flowerN; i++){
            if(flowerbed[i] == 0){
                if(i-1 >= 0)
                    if(flowerbed[i-1] == 1)
                        continue;
                if(i+1 < flowerN)
                    if(flowerbed[i+1] == 1)
                        continue;       
                n--;
                flowerbed[i] = 1;
                if(n<=0)
                    return true;
            }
        }

        if(n>0)
            return false;
        else
            return true;
    }
};
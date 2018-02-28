class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);
        int len=flowerbed.size(),i=1;
        while(i<len-1){
            if(flowerbed[i-1]+flowerbed[i]+flowerbed[i+1]==0){
                n--;
                i+=2;
            }
            else
                i++;
        }
        
        return n<=0;
    }
};
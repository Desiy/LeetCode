class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int housesNum=houses.size(),heatersNum=heaters.size();
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        int i=0,j=0,radius=0;
        while(i<housesNum){
            while(j<heatersNum-1&&abs(heaters[j]-houses[i])>=abs(heaters[j+1]-houses[i]))
                    ++j;
            radius=abs(heaters[j]-houses[i])>radius?abs(heaters[j]-houses[i]):radius;
            ++i;
        }
        return radius;
    }
};
class Solution {
public:
    int findEarlyFinish(vector<int>& start1, vector<int>& duration1, vector<int>& start2, vector<int>& duration2){
        int finish1=INT_MAX;
        for(int i=0;i<start1.size();i++){
            finish1=min(finish1,start1[i]+duration1[i]);
        }
        int finish2=INT_MAX;
        for(int i=0;i<start2.size();i++){
            finish2=min(finish2,max(finish1,start2[i])+duration2[i]);        
        }
        return finish2;
    }
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int land_to_water=findEarlyFinish(landStartTime,landDuration,waterStartTime,waterDuration);
        int water_to_land=findEarlyFinish(waterStartTime,waterDuration,landStartTime,landDuration);

        return min(land_to_water,water_to_land);
    }
};
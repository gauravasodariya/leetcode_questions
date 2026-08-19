class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,int>mp;
        for(int i=0;i<reservedSeats.size();i++){
            int row=reservedSeats[i][0];
            int seat=reservedSeats[i][1];
            mp[row] |=(1<<seat);
        }
        int ans=(n-mp.size())*2;
        int maskA=(1<<2) | (1<<3) | (1<<4) | (1<<5);
        int maskB=(1<<4) | (1<<5) | (1<<6) | (1<<7);
        int maskC=(1<<6) | (1<<7) | (1<<8) | (1<<9);
        for(auto p : mp){
            int row=p.first;
            int bookedSeat=p.second;
            bool groupA=(bookedSeat & maskA)==0;
            bool groupB=(bookedSeat & maskB)==0;
            bool groupC=(bookedSeat & maskC)==0;

            if(groupA && groupC){
                ans+=2;
            }
            else if(groupA || groupB || groupC){
                ans+=1;
            }
        }
        return ans;
    }
};
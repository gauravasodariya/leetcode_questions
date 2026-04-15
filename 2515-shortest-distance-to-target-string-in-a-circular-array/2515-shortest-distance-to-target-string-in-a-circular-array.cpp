class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans=INT_MAX;
        int n=words.size();
        for(int i=0;i<words.size();i++){
            if(words[i]==target){
                int diff=abs(i-startIndex);
                int circular=n-diff;
                ans=min(ans,min(diff,circular));
            }
        }
        return ans==INT_MAX ? -1 : ans;
    }
};
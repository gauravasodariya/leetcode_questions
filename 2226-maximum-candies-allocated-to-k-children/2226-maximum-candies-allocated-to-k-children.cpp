class Solution {
public:
    long long findAns(vector<int>candies,int mid,long long k){
        long long count=0;
        for(int i=0;i<candies.size();i++){
            count+=candies[i]/mid;
        }
        return count;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int ans=0;
        int l=1;
        int r=*max_element(candies.begin(),candies.end());
        while(l<=r){
            int mid=(l+r)/2;
            if(findAns(candies,mid,k)>=k){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
};
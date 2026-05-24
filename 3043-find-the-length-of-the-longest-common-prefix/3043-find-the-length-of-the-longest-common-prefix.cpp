class Solution {
public:
    int digits(int x){
        int count=0;
        while(x>0){
            count++;
            x=x/10;
        }
        return count;
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2){
        unordered_set<int>st;
        for(int num : arr1){
            int x=num;
            while(x>0){
                st.insert(x);
                x=x/10;
            }
        }
        int ans=0;
        for(int num : arr2){
            int x=num;
            int length=digits(num);
            while(x>0){
                if(st.count(x)){
                    ans=max(ans,length);
                    break;
                }
                x=x/10;
                length--;
            }
        }
        return ans;
    }
};
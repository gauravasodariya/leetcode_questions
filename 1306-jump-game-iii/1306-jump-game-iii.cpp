class Solution {
public:
    int n;
    bool DFS(vector<int>&arr,int i){
        if(i<0 || i>=n || arr[i]<0){
            return false;
        }
        if(arr[i]==0){
            return true;
        }
        arr[i]=arr[i]*-1;

        bool left=DFS(arr,i-arr[i]);
        bool right=DFS(arr,i+arr[i]);

        return left||right;
    }
    bool canReach(vector<int>& arr, int start) {
        n=arr.size();
        return DFS(arr,start);
    }
};
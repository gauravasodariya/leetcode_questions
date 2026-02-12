class Solution {
public:
    int halveArray(vector<int>& nums) {
        double total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        priority_queue<double>q(nums.begin(),nums.end());
        double value=0;
        int count=0;
        while(value<total/2){
            float num=q.top();
            q.pop();
            q.push(num/2);
            value+=num/2;
            count++;
        }
        return count;
    }
};
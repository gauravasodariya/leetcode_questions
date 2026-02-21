class Solution {
public:
    bool countNumber(int num){
        int count=0;
        while(num>0){
            if(num&1){
                count++;
            }
            num=num >> 1;
        }
        if(count<2){
            return false;
        }
        for(int i=2;i*i<=count;i++){
            if(count%i==0){
                return false;
            }
        }
        return true;
    }
    int countPrimeSetBits(int left, int right){
        int count=0;
        for(int i=left;i<=right;i++){
            if(countNumber(i)){
                count++;
            }
        }
        return count;
    }
};
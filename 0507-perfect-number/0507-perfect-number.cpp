class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        if(num<2){
            return false;
        }
        for(int i=1;i*i<=num;i++){
            if(num%i==0){
                sum+=i;
                if(num/i!=i && i!=1){
                    sum+=num/i;
                }
            }
        }
        return sum==num;
    }
};
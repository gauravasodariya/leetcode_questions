class Solution {
public:
    int countOne(int num)
    {
        int count=0;
        while(num)
        {
            count+=num&1;
            num>>=1;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) 
    {
        auto lambda=[&](int &a,int &b)
        {
            int count_a=countOne(a);
            int count_b=countOne(b);
            if(count_a==count_b)
            {
                return a<b;
            }
            return count_a<count_b;
        };
        sort(arr.begin(),arr.end(),lambda);
        return arr;
    }
};
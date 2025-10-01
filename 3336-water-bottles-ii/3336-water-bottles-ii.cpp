class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) 
    {
        int consumed=0;
          while(numBottles>=numExchange)
        {
            consumed+=numExchange;
            numBottles=numBottles-numExchange+1;
            numExchange++;
        }
        return consumed+numBottles;
    }
};




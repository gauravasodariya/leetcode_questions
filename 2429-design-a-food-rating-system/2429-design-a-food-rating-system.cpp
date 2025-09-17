class FoodRatings {
public:
    unordered_map<string,pair<string,int>>foodMp;
    unordered_map<string,set<pair<int,string>>> cuisineMp;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) 
    {
        for(int i=0;i<foods.size();i++)
        {
            string food=foods[i];
            string cuisine=cuisines[i];
            int rating=ratings[i];

            foodMp[food]={cuisine,rating};
            cuisineMp[cuisine].insert({-rating,food});
        }    
    }
    
    void changeRating(string food, int newRating) 
    {
        //get rating and cuisined
         string cuisine=foodMp[food].first;
         int oldRating=foodMp[food].second;

         cuisineMp[cuisine].erase({-oldRating,food}); 
         foodMp[food].second=newRating;         
         cuisineMp[cuisine].insert({-newRating,food}); 
    }
    
    string highestRated(string cuisine) 
    {
        return cuisineMp[cuisine].begin()->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */
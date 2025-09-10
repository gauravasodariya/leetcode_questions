class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) 
    {
        unordered_set<int>sadUser;
        for(auto friends : friendships)
        {
            int u=friends[0]-1;
            int v=friends[1]-1;
            unordered_set<int>langSet(languages[u].begin(),languages[u].end());
            bool canTalk=false;
            for(int lang : languages[v])
            {
                if(langSet.count(lang))
                {
                    canTalk=true;
                    break;
                }
            }
            if(!canTalk)
            {
                sadUser.insert(u);
                sadUser.insert(v);
            }
        }
        //find max known language among sadUser
        vector<int>language(n+1,0);
        int maxElement=0;
        for(int user : sadUser)
        {
            for(int lang : languages[user])
            {
                language[lang]++;
                maxElement=max(maxElement,language[lang]);
            }
        }
        return sadUser.size()-maxElement;

    }
};
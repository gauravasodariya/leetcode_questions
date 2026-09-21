class Solution {
public:
    string reverse(string &word,int right){
        int left=0;
        while(left<right){
            swap(word[left],word[right]);
            left++;
            right--;
        }
        return word;
    }
    string reversePrefix(string word, char ch) {
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                return reverse(word,i);
            }
        }
        return word;
    }
};
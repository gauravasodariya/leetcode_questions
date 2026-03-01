class Solution {
public:
    int minPartitions(string n) {
        char ch=*max_element(n.begin(),n.end());
        return ch-'0';
    }
};
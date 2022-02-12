class Solution {
public:
    int minPartitions(string s) {
        return (*max_element(s.begin(),s.end())-'0');
    }
};
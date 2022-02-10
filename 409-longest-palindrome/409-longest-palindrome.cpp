class Solution {
public:

    int longestPalindrome(string s) {
        int res=0;
        map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        for(auto i:m){
            if(i.second >= 2){
                if(i.second %2 == 0){
                    res+=i.second;
                }else{
                    res+=(i.second-1);
                }
            }
        }
        
        if(res != s.length()){
            if(s.length() != 2)
                res++;
            else
                if(res ==0)
                    res++;
        }
        return res;
        
    }
};
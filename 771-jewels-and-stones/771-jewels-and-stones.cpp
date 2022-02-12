class Solution {
public:
    int numJewelsInStones(string jw, string s) {
        int res=0;
        for(int i=0;i<jw.length();i++){
            for(int j=0;j<s.length();j++){
                if(jw[i]==s[j]) res++;
            }
        }
        return res;
    }
};
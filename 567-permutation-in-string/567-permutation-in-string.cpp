class Solution {
public:
    bool isArg(int m1[],int m2[]){
      
     for (int i = 0; i < 26; i++) {
            if (m1[i] != m2[i])
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        
         if (s1.length() > s2.length())
            return false;
         int m1[26] = {0};
        for(int i=0;i<s1.length();i++){
            m1[s1[i]- 'a']++;
        }
        
        for (int i = 0; i <= s2.length() - s1.length(); i++) {
           int m2[26] = {0};
            for (int j = 0; j < s1.length(); j++) {
                m2[s2[i + j] - 'a']++;
            }
            if (isArg(m1, m2))
                return true;
        }
        return false;
        
        
        
    }
};
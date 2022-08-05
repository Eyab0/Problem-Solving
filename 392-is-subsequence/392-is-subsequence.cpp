class Solution {
public:
    bool isSubsequence(string s, string t) {
        
      if(s.size()>t.size()) return false;
      int j=0,i=0;
      while(i<s.size() && j<t.size()){
          
          if(s[i] == t[j]){
              i++;
              j++;
          }else{
              j++;
          }
          
      }
    if(i==s.size()) return true;
    return false;
        
    }
};
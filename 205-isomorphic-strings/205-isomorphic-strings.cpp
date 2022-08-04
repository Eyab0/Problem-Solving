class Solution {
public:
    bool isIsomorphic(string s, string t) {
    map<char,char> mp;
        for(int i=0;i<s.size();i++){
            //if(s[i]==t[i])return false;
            if(mp.count(s[i])){
                if(mp[s[i]]!=t[i])return false;
            }
            mp[s[i]]=t[i];
        }
        mp.clear();
        swap(s,t);
        for(int i=0;i<s.size();i++){
            //if(s[i]==t[i])return false;
            if(mp.count(s[i])){
                if(mp[s[i]]!=t[i])return false;
            }
            mp[s[i]]=t[i];
        }
        return true;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         map<char,bool> ms,mt;
//         for(char c:s){
//             ms[c] = true;
//         }
//          for(char c:t){
//             mt[c] = true;
//         }
        
//         map<char,char> mss,mtt;
        
//         if(ms.size()==mt.size()){
            
            
//             for(int i=0;i<s.size();i++){
                
//                 if(mss.count(s[i])){
//                     if(s[i] == mtt[mss[s[i]]]){
//                         continue;
//                     }
//                     else{
//                         return false;
//                     }
//                 }
//                   if(mtt.count(t[i])){
//                     if(t[i] == mss[mtt[t[i]]]){
//                         continue;
//                     } else{
//                         return false;
//                     }
//                 }
                
                
//                 mss[s[i]] = t[i];
//                 mtt[t[i]] = s[i];
                
//             }
            
            
//         } else{
//                         return false;
//                     }
//         return true;
    }
};
class Solution {
public:
    int mostWordsFound(vector<string>& snt) {
        
        int mx=0;
        for(int i=0;i<snt.size();i++){
            int cnt=1;
            for(int j=0;snt[i][j]!='\0';j++){
                if(snt[i][j]==' '){
                    cnt++;
                }
            }
            mx = max(mx,cnt);
            
            
            
        }
        
        
        return mx;
        
        
        
        
    }
};
class Solution {
public:
    
    int dp(int n){
        int num[n+1];
        num[0] = num[1] = 1;
        for(int i=2;i<n+1;i++){
            num[i]=0;
            for(int j=0;j<i;j++){
                num[i] += num[j] * num[i - j - 1];
            }
        }
        
        return num[n];
    }
    
    
    int numTrees(int n) {
        return dp(n);
        
    }
};
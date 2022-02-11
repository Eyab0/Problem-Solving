class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        
        int p=0,m=0;
        for(int i=0;i<op.size();i++){
            if(op[i].find('+') != string::npos){
                p++;
            }else{
                m++;
            }
        }
        return p-m;
    }
};
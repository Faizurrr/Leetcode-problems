class Solution {
public:
    bool validDigit(int n, int x) {
       string val = to_string(n);
        if(val[0]-'0'==x){
            return false;
        }
         for(int i = 0 ;i<val.size();i++){
             if(val[i]-'0'==x){
                 return true;

             }
         }
         return false;
    }
};
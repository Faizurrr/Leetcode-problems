class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
         int count = 0 ;
         for(int i =0; i<s.size(); i++)   {
           int noofzeros = 0;
           int noofonce = 0;
            for(int j =i; j<s.size(); j++)   {
                if(s[j]=='0'){
                    noofzeros++;
                }  else {
                     noofonce++ ;
                }
                 if(noofzeros<=k || noofonce <=k){
                count++;
            } else{
                break;
            }
         }
           
         }
         return count;
    }
};
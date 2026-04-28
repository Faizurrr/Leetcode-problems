class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
             vector<int>val; 
              int ans = 0 ;
               
         for(int  i =0 ; i<grid.size(); i++){
             for(int  j = 0; j<grid[i].size(); j++) {
                 val.push_back(grid[i][j]);
             }
         } 
           sort(val.begin() ,  val.end()); 
             int n = val.size();
              int target = val[n/2]; // middle index value will suitable for optimization...
               for(int i = 0 ; i<val.size(); i++){
                   int diff = abs(target - val[i]); 
                   if(diff%x!=0){
                     return -1;
                   }
                    ans+=(diff/x); 
               }
           return ans;     

    }
};
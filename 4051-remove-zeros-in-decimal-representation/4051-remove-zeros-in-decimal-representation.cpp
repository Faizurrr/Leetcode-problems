class Solution {
public:
    long long removeZeros(long long n) {
         // brute force apporoch.. 
    //     string val = to_string(n);
    //     string ans = "";  
    //     for(char ch : val){
    //         if(ch!='0'){
    //             ans+=ch;
    //         }
    //     }
    //     return stoll(ans);
    // }
//};  
        long long place = 1; // no need to convert in string.. 
            long long result = 0;
        while (n > 0) {
            int digit = n % 10;
            n /= 10;
            if (digit != 0) {
                result += (digit * place);
                place *= 10;
            }
        }
        return result;
    }
};
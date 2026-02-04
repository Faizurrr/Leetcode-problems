
class Solution {
public:

    bool isMonobit(string binary) { // function which check binary repersentation is monobit or not...
        for(int i = 0; i < binary.size() - 1; i++) {
            if(binary[i] != binary[i+1]) return false;
        }
        return true;
    }

    string toBinary(int num) {// this convert number into binary reprentation..
        if(num == 0) return "0";
        int bits = 32 - __builtin_clz(num);
        return bitset<32>(num).to_string().substr(32 - bits);
    }

    int countMonobit(int n) {
        int count = 0;

        for(int i = 0; i <= n; i++) {
            string binary = toBinary(i);
            if(isMonobit(binary)) {
                count++;
            }
        }
        return count;
    }
};

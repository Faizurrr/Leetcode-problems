class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int waviness = 0;

        for (int num = num1; num <= num2; num++) {
            string val = to_string(num);

            for (int i = 1; i < val.size() - 1; i++) {

                if (val.size() >= 3) {

                    if ((val[i] > val[i+1] && val[i] > val[i-1]) ||
                        (val[i] < val[i+1] && val[i] < val[i-1])) {

                        waviness++;
                    }
                }
            }
        }

        return waviness;
    }
};

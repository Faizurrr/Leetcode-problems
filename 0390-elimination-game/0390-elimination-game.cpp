class Solution {
public: 
// very interesting question...
    int lastRemaining(int n) {
        int head = 1;          // first number
        int step = 1;          // gap between numbers
        bool left = true;      // direction
        int remaining = n;

        while (remaining > 1) {
            // Move head if:
            // 1) left to right elimination
            // 2) right to left AND count is odd
            if (left || remaining % 2 == 1) {
                head += step;
            }

            remaining /= 2;    // half numbers remain
            step *= 2;         // gap doubles
            left = !left;      // change direction
        }

        return head;
    }
};

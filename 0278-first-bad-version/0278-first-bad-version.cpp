// The API is already defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (isBadVersion(mid)) {
                // mid is bad → first bad is at mid or before
                high = mid;
            } else {
                // mid is good → first bad is after mid
                low = mid + 1;
            }
        }

        // low == high → first bad version
        return low;
    }
};

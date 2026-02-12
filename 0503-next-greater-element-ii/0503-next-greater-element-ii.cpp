class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);   // initialize with -1
        stack<int> st;            // store indices

        // traverse twice for circular array
        for (int i = 0; i < 2 * n; i++) {
            int num = nums[i % n];

            // if current number is greater than stack top element
            while (!st.empty() && nums[st.top()] < num) {
                ans[st.top()] = num;
                st.pop();
            }

            // push index only in first pass
            if (i < n) {
                st.push(i);
            }
        }

        return ans;
    }
};

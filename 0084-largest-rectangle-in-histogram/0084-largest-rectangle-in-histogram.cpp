// class Solution {
// public: // Brute force apporoch : check all combination and return maxArea..
//     int largestRectangleArea(vector<int>& heights) {

//         int n = heights.size();
//         int maxArea = 0;

//         for(int i = 0; i < n; i++) {

//             int minHeight = heights[i];

//             for(int j = i; j < n; j++) {

//                 minHeight = min(minHeight, heights[j]);

//                 int area = minHeight * (j - i + 1);

//                 maxArea = max(maxArea, area);
//             }
//         }

//         return maxArea;
//     }
// };
// need to optimize 
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();
        stack<int> st;
        int maxArea = 0;

        for(int i = 0; i <= n; i++) {
            
            // Important trick:
            // When i == n, treat height as 0 to empty the stack
            int currHeight = (i == n) ? 0 : heights[i];

            while(!st.empty() && currHeight < heights[st.top()]) {
                
                int height = heights[st.top()];
                st.pop();

                int width;

                if(st.empty()) {
                    width = i;
                } else {
                    width = i - st.top() - 1;
                }

                maxArea = max(maxArea, height * width);
            }

            st.push(i);
        }

        return maxArea;
    }
};
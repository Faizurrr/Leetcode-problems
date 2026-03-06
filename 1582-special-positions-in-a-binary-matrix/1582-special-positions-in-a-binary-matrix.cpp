class Solution {
public:
    bool isSpecial(int i, int j, vector<vector<int>> &mat) {
        
        // Check row
        for(int col = 0; col < mat[i].size(); col++) {
            if(col != j && mat[i][col] == 1) {
                return false;
            }
        }

        // Check column
        for(int row = 0; row < mat.size(); row++) {
            if(row != i && mat[row][j] == 1) {
                return false;
            }
        }

        return true;
    }

    int numSpecial(vector<vector<int>>& mat) {
        int count = 0;

        for(int i = 0; i < mat.size(); i++) {
            for(int j = 0; j < mat[i].size(); j++) {
                if(mat[i][j] == 1 && isSpecial(i, j, mat)) {
                    count++;
                }
            }
        }

        return count;
    }
};
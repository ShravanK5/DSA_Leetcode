int maxRow(vector<vector<int>>& mat, int col) {
    int index = -1;
    int maxval = -1;

    for (int i = 0; i < mat.size(); i++) {
        if (mat[i][col] > maxval) {
            maxval = mat[i][col];
            index = i;
        }
    }
    return index;
}

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();
        int start = 0;
        int end = n - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            int maxrow = maxRow(mat, mid);

            int left = (mid > 0) ? mat[maxrow][mid - 1] : INT_MIN;
            int right = (mid < n - 1) ? mat[maxrow][mid + 1] : INT_MIN;

            if (mat[maxrow][mid] > left && mat[maxrow][mid] > right) {
                return {maxrow, mid};
            } else if (mat[maxrow][mid] < left) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return {-1, -1};
    }
};
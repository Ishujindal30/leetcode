class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0 ; i < n ; i++){
            int j = 0;
            while(j <= n-j-1){
                swap(matrix[i][j],matrix[i][n-j-1]);
                j++;
            }
        }

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n-i-1 ; j++){
                swap(matrix[i][j],matrix[n-j-1][n-i-1]);
            }
        }
    }
};
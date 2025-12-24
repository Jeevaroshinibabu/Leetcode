#define MIN(a, b) ((a) < (b) ? (a) : (b))

int minPathSum(int** grid, int gridSize, int* gridColSize) {
    int row = gridSize, col = gridColSize[0];
    
    // dp[i][j] stores the minimum path sum from (0,0) to (i,j)
    int** dp = malloc(sizeof(int*) * row);  
    
    for (int i = 0; i < row; i++) {
        dp[i] = malloc(sizeof(int) * col);
    }
    
    // Initialize the first row and first column
    dp[0][0] = grid[0][0];
    for (int i = 1; i < row; i++) dp[i][0] = dp[i - 1][0] + grid[i][0];
    for (int j = 1; j < col; j++) dp[0][j] = dp[0][j - 1] + grid[0][j];
    
    // Bottom-up DP recurrence relation
    for (int i = 1; i < row; i++) {
        for (int j = 1; j < col; j++) {
            dp[i][j] = MIN(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
        }
    }
    
    int result = dp[row - 1][col - 1];
    for (int i = 0; i < row; i++) free(dp[i]);
    free(dp);
    return result;
}
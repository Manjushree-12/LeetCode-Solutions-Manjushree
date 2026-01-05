class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int minute = 0;

        while (true) {
            bool changed = false;

    
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (grid[i][j] == 2) {
                        if (i-1 >= 0 && grid[i-1][j] == 1) {
                            grid[i-1][j] = 3;
                            changed = true;
                        }
                        if (i+1 < m && grid[i+1][j] == 1) {
                            grid[i+1][j] = 3;
                            changed = true;
                        }
                        if (j-1 >= 0 && grid[i][j-1] == 1) {
                            grid[i][j-1] = 3;
                            changed = true;
                        }
                        if (j+1 < n && grid[i][j+1] == 1) {
                            grid[i][j+1] = 3;
                            changed = true;
                        }
                    }
                }
            }

            if (!changed) break;

        
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (grid[i][j] == 3)
                        grid[i][j] = 2;
                }
            }

            minute++;
        }

        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1)
                    return -1;
            }
        }

        return minute;
    }
};

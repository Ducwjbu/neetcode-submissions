class Solution {
public:

    int dfs(vector<vector<int>>& grid, int i, int j){
        int n = grid.size();
        int m = grid[0].size();
        int a = 0;
        
        if(i < 0 || i >= n || j < 0 || j >= m) return 0;

        if(grid[i][j] == 0) return 0;

        a++;
        grid[i][j] = 0;

        a = a + dfs(grid, i - 1, j) + dfs(grid, i + 1, j) + dfs(grid, i, j - 1) + dfs(grid, i, j + 1);
        return a;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == 0) continue;
                ans = max(ans, dfs(grid, i, j));
            }
        }
        return ans;
    }
};

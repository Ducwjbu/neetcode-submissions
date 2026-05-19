class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int dx[4] = {0, 0, -1, 1};
        int dy[4] = {-1, 1, 0, 0};

        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> d(n, vector<int>(m));
        queue<pair<int, int>> q;

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == 2) q.push({i, j});
            }
        }

        int ans = 0;

        while(!q.empty()){
            auto cur = q.front();
            q.pop();
            for(int i = 0;i<4;i++){
                int nx = cur.first + dx[i];
                int ny = cur.second + dy[i];

                if(nx < 0 || ny < 0 || nx >= n || ny >= m || grid[nx][ny] == 0 || grid[nx][ny] == 2) continue;

                grid[nx][ny] = 2;
                d[nx][ny] = d[cur.first][cur.second] + 1;
                ans = max(ans, d[nx][ny]);
                q.push({nx , ny});
            }
        }
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == 1) return -1;
            }
        }
        return ans;
    }
};

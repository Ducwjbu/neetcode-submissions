class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int inf = 2147483647;
        vector<pair<int, int>> d = {
            {0, 1},
            {0, -1},
            {1, 0},
            {-1, 0}
        };
        queue<pair<int, int>> q;
        int n = grid.size();
        int m = grid[0].size();

        for(int i = 0; i < n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == 0) q.push({i, j});
            }
        }

        while(!q.empty()){
            auto cur = q.front();
            q.pop();
            
            for(auto x : d){
                int nx = cur.first + x.first;
                int ny = cur.second + x.second;
                
                if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

                if(grid[nx][ny] != inf) continue;

                grid[nx][ny] = grid[cur.first][cur.second] + 1;
                q.push({nx, ny});
            }
        }
    }
};

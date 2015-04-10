#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>> &grid) {
        m = grid.size();
        if (m <= 0)
            return 0;

        n = grid[0].size();
        if (n <= 0)
            return 0;

        int result = 0;
        for (int i = 0; i<m; i++)
        {
            for (int j = 0; j<n; j++)
            {
                if (grid[i][j] != '1')
                    continue;
                ++result;
                dfs(grid, i, j);
            }
        }
        return result;
    }
    void dfs(vector<vector<char>> &grid, int i, int j)
    {
        if (i<0 || i >= m || j<0 || j >= n)
            return;
        if (grid[i][j] == '1')
        {
            grid[i][j] = '2';
            dfs(grid, i - 1, j);
            dfs(grid, i + 1, j);
            dfs(grid, i, j - 1);
            dfs(grid, i, j + 1);
        }
    }
private:
    int m;
    int n;
};
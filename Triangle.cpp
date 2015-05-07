class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        
        // 状态转移方程 row[j] = min(row[j], row[j+1]) + triangle[i][j]
        // 其中row初始为triangle的最后一行
        int result = 0;
        const int n = triangle.size();
        vector<int> row = triangle[n-1];
        
        for(int i=n-2; i>=0; i--)
        {
            for(int j=0; j<=i; j++)
            {
                row[j] = min(row[j], row[j+1]) + triangle[i][j];
            }
        }
        
        return row[0];
    }
};
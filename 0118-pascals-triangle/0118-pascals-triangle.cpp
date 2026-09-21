class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if (numRows == 1)
            return {{1}};

        ans.push_back({1});
        ans.push_back({1,1});
        
        for (int i = 2; i < numRows; i++) {
            vector<int> row;
            row.push_back(1);
            int n = ans[i - 1].size();
            for (int j =1; j < n; j++) {
                row.push_back(ans[i - 1][j-1] + ans[i - 1][j]);
            }
            row.push_back(1);
            ans.push_back(row);
        }
        return ans;
    }
};

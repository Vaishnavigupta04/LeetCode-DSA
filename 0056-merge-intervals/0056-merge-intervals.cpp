class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> arr;
        int a = intervals[0][0];
        int b = intervals[0][1];

        for (int i = 0; i < n - 1; i++) {
            int c = intervals[i + 1][0];
            int d = intervals[i + 1][1];
            if (c <= b) {
                a = min(a, c);
                b = max(b, d);
            } else {
                arr.push_back({a, b});
                a = c;
                b = d;
            }
        }
        arr.push_back({a, b});
        return arr;
    }
};
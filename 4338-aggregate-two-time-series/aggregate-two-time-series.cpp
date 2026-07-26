class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
      vector<vector<int>> ans;
        int n = series1.size();
        int m = series2.size();
        int i = 0, j = 0;
        int val1 = 0, val2 = 0;
       while(i<n || j<m) {
           if(j==m || (i < n && series1[i][0] < series2[j][0])) {
              int time =  series1[i][0];
                val1 = series1[i][1];
                val2 = (j<m ? series2[j][1] : 0);
               int res = val1+val2;
               ans.push_back({time, res});
               i++;
           } 
           else if(i==n || (j < m && series2[j][0] < series1[i][0])) {
              int time =  series2[j][0];
               val1 = (i<n ? series1[i][1] : 0);
                val2 = series2[j][1];
               int res = val1+val2;
               ans.push_back({time, res});
               j++;
           } else {
               int time = series1[i][0];
                val1 = series1[i][1];
                val2 = series2[j][1];
               int res = val1+val2;
               ans.push_back({time, res});
               i++, j++;
           } 
       }
    
        return ans;
    }
};
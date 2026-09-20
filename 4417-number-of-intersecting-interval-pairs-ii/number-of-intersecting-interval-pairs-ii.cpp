class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        long long ans = 0;
        for(int i = 0; i<intervals.size()-1; i++) {
            
                int l = i+1;
                int h = intervals.size()-1;
                long long cnt = 0;
                while(l<=h) {
                    int mid = l+(h-l)/2;
                    if(intervals[mid][0] <= intervals[i][1]) {
                        cnt += (mid-l+1);
                        l = mid+1;
                    } else {
                        h = mid-1;
                    }
                }
                ans += cnt;

        }
        return ans;
    }
};
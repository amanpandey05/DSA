class Solution {
public:
//  bool isposs(int profit, vector<pair<int, int>>& mp, vector<int> &worker, vector<int>& mxprof) {
//     int st = 0;
//     int n = mp.size();
//     for(int i =0; i<n; i++) {
//         // st += worker[i];
//         if(worker[i] > mp[i].first) {

//         } else{

//         }
//     }
//  }
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
     int ans = 0;
     vector<pair<int, int>> mp;
    int n = difficulty.size();
    for(int i = 0; i<n; i++) {
        mp.push_back({difficulty[i], profit[i]});
    }
     sort(mp.begin(), mp.end());
    //    unordered_map<int, int> mp;
    //    for(int i =0; i<difficulty.size(); i++) {
    //     if(j == worker.size()) break;
    //     mp[difficulty[i]] = i;
    //    }
    // vector<int> maxprof(n, 0);
        for(int i = 0; i<worker.size(); i++) {
            int curr = 0;
        for(int j = 0; j<n; j++) {
            if(mp[j].first>worker[i]) break;
                curr = max(curr, mp[j].second);
           
            
        }
        ans += curr;
        }
           
       return ans;
    }
};
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
     int n = gas.size();
     int m = cost.size();
     if(n!=m) return -1;
     int diff = 0;
     int ans = 0;
     int bal = 0;
     for(int i = 0; i<n; i++) {
        bal += gas[i]-cost[i];
        if(bal < 0) {
            diff += bal; 
            bal = 0;
            ans = i+1;
        }
     }
     if(diff + bal >= 0) return ans;
     else return -1;   
    }
};
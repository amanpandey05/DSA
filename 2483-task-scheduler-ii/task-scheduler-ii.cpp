class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
      unordered_map<int, int> mp1;
      long long cnt = 0;
      for(int i = 0; i<tasks.size(); i++) {
        if(!mp1.count(tasks[i])) {
            cnt++;
            mp1[tasks[i]] = cnt;
            continue;  
        } 
        else {
            int gcnt = cnt-mp1[tasks[i]];
           if(gcnt >= space) {
                cnt++;
           }
           else {  
            cnt = cnt + (space - gcnt) + 1;
             }
             mp1[tasks[i]] = cnt;
        }
      }
      return (long long)cnt;
    }
};
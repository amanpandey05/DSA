class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> mp;
        for(auto i: tasks) {
            mp[i]++;
        }
  int cnt = 0;
  for(auto i: mp) {
    int x = i.second;
    if(x<2) {return -1;}
    if(x == 2) {cnt++;}
    else if(x == 3) {cnt++;}
    else if(x > 3){
        if(x%3 == 0) {
            cnt += (x/3);
        }
        if(x % 3 == 1) {
                    cnt += (x / 3 + 1);
                }
         if(x%3 == 2) {
            cnt += (x/3 + 1);
        }
       
    }
  }
  return cnt;
    }
};
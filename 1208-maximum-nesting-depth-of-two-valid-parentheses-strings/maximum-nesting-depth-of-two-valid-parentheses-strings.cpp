class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
         vector<int> res(seq.size(), 0);
         int cnt = 0;
         int maxi = 0;
         for(int i = 0; i<seq.size(); i++) {
            if(seq[i] == '(') cnt++;
            maxi = max(maxi, cnt);
            if(seq[i] == ')') cnt--; 
         }
          int d = maxi/2;
            bool f = false;
            for(int i = 0; i<seq.size(); i++) {
                if(seq[i] == '(') {
                    cnt++;
                } else if(seq[i] == ')') {
                    cnt--;
                }
                if(!f && cnt > d) {
                    res[i] = 1;
                    f = true;
                }
                if(f && cnt >= d) {
                    res[i] = 1;
                    if(cnt == d) {
                        f = false;
                    }
                }
            }
            return res;
    }
};
class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
      int i = 0;
      int cnt = 0;
        
        string ans = "";
        for(int j = 0; j<s.size(); j++) {
             if(s[j] == '1') cnt++;
             while(i<j && (s[i] == '0' || cnt > k)){
                if(s[i] == '1') {
                    cnt--;
                }
                i++;
             }
           
            if(cnt == k) {
                string curr = s.substr(i, j-i+1);
                if(ans.empty() || ans.length()>curr.length()){
                    ans = curr;
                }
                else if(ans.length()==curr.length()){
                    ans = min(ans,curr);
                }
               
            }
           
              
        }

        return ans;
    }
};
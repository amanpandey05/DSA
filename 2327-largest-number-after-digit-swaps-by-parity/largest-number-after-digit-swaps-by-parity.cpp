class Solution {
public:
    int largestInteger(int num) {
       string s = to_string(num);
       string res = "";
       vector<char> even, odd;
       for(int i = 0; i<s.size(); i++) {
        if((s[i] - '0') % 2 == 0) {
           even.push_back(s[i]);
        } else {
         odd.push_back(s[i]);   
        }
       }
     sort(even.begin(), even.end(), greater<char>());
     sort(odd.begin(), odd.end(), greater<char>());
      int e = 0, o = 0;
      
       for(char c: s) {
       
        if((c-'0')%2 == 0 ) {
            res += even[e++];
        }else {
            res += odd[o++];
        }
       }
       int n = stoi(res);
       return n;
    }
};
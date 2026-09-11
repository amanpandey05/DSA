class Solution {
public:
    string largestMerge(string s1, string s2) {
       int i = 0;
       int j = 0;
       string ans = ""; 
       while(i<s1.size() && j<s2.size()) {
        if(s1[i] == s2[j]) {
            if(s1.substr(i) > s2.substr(j)) {
                    ans += s1[i];
                    i++;
                }
                else {
                    ans += s2[j];
                    j++;
                }
        //    if((s1.size()-i+1) >= (s2.size()-j+1)) i++;
        //    else j++;
        }
        else if(s1[i] > s2[j]) {
            ans += s1[i];
            i++;
        } else {
            ans += s2[j];
            j++;
        }
       }
       while(i<s1.size()) {
        ans += s1[i];
        i++;
       }
       while(j<s2.size()) {
        ans += s2[j];
        j++;
       }
       return ans;
    }
};
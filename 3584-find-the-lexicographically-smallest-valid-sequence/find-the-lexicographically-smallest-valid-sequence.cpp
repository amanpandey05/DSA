class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int i = word1.size()-1;
        int j = word2.size()-1;
        vector<int> rightsideFound;
        int rightcnt = 0;
        while(i>=0 && j>=0) {
         if(word1[i] == word2[j]) {
             rightcnt++;
             
             j--;
         }  
         rightsideFound.push_back(rightcnt); 
             i--;
   
        }
         while(i>=0) {
    rightsideFound.push_back(rightcnt); 
             i--;
  }
        vector<int> res;
        reverse(rightsideFound.begin(), rightsideFound.end());
        // rightsideFound.push_back(0);
        int x = 0; 
        int y = 0;
        bool cc = false;
        while(x<word1.size() && y<word2.size()) {
            if(word1[x] == word2[y]){
                res.push_back(x);
                y++;
            }

           else if(cc == false && x+1 < word1.size() && rightsideFound[x+1] >= word2.size()-y-1) {
                
                res.push_back(x);
                y++;
                cc = true;
            } 
            x++;
        }
        
        if(y == word2.size()) return res;
        return {};
    }
};
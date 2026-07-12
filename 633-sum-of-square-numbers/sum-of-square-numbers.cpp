class Solution {
public:
    bool judgeSquareSum(int c) {
      int i = 0;
      int j = sqrt(c);
      while(i<=j) {
        long long a = i*i;
        long long b = j*j;
        if((a+b) == c) {
            return true;
            }
            else if((a+b) > c) {
                j--;
            } else {
                i++;
            }
      }   
      return false;
    }
};
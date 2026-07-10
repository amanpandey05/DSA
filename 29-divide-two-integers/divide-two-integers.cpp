class Solution {
public:
    int divide(int dividend, int divisor) {
      long long d = 1LL * dividend/divisor;
     if (d > INT_MAX) return INT_MAX;
     if (d < INT_MIN) return INT_MIN;
      else return (int)d;  
    }
};
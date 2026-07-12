class Solution {
public:
    int superPow(int a, vector<int>& b) {
   int mod = 1337;
   int ans = 1;
   a%=mod;
   for(int d: b) {
    int x = 1;
    for(int i = 0; i<10; i++) 
        x = (ans*x)%mod;

        int y = 1;
    for(int i = 0; i<d; i++) 
    y = (y*a)%mod;

    ans = (x*y)%mod;
   }
   return ans;
    }
};
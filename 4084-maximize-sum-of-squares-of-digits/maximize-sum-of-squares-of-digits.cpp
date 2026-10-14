class Solution {
public:

    string maxSumOfSquares(int num, int sum) {
        if(sum > 9*num) {
            return "";
        }
        string res(num, '0');
        for(int i= 0; i<num && sum > 0; i++) {
            int d = min(9, sum);
            res[i] = '0'+d;
            sum-=d;
        }
        return res;
    //    long long x = pow(10, num-1);
    //    long long z = pow(10, num) - 1;
    //    long long no = -1, sq = -1;
    //    for(long long i = x; i<= z; i++) {
    //     long long n = i;
    //     int sm = 0, s = 0;
    //     while(n> 0) {
    //         int d = n%10;
    //         sm += d;
    //         s += (d*d);
    //         n/=10;
    //     } 
    //     if(sm == sum && s >= sq) {
    //         sq = s;
    //         no = i;
    //     }
    //    }
    //    if(no == -1) return "";
    //    return to_string(no);
    }
};
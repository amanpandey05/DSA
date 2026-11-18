
class Solution {
public:
    int minimumChanges(string s, int k) {
        int n = s.size();

        // Store all proper divisors of each length.
        vector<vector<int>> factors(n + 1);

        for (int d = 1; d < n; d++) {
            for (int len = 2 * d; len <= n; len += d) {
                factors[len].push_back(d);
            }
        }

        // cost[i][j] = minimum changes to make
        // substring s[i...j] a semi-palindrome.
        vector<vector<int>> cost(n, vector<int>(n, n));

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int len = j - i + 1;

                for (int d : factors[len]) {
                    int changes = 0;

                    for (int offset = 0; offset < d; offset++) {
                        int l = i + offset;
                        int r = j - d + 1 + offset;

                        while (l < r) {
                            if (s[l] != s[r]) {
                                changes++;
                            }

                            l += d;
                            r -= d;
                        }
                    }

                    cost[i][j] = min(cost[i][j], changes);
                }
            }
        }

        // dp[i][j] = minimum changes to divide
        // suffix s[i...] into exactly j parts.
        vector<vector<int>> dp(
            n + 1, vector<int>(k + 1, n)
        );

        dp[n][0] = 0;

        for (int i = n - 1; i >= 0; i--) {
            for (int j = 1; j <= k; j++) {

                for (int l = i + 1; l < n; l++) {

                    if (dp[l + 1][j - 1] == n)
                        continue;

                    dp[i][j] = min(
                        dp[i][j],
                        cost[i][l] + dp[l + 1][j - 1]
                    );
                }
            }
        }

        return dp[0][k];
    }
};

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int i, j, count = 0;
        int n = A.size();  
        if(!n)
            return 0;
        vector<int> dp(n, 0);
        int sm = 0;
        for(i = 2; i < n; i++)
        {
            if(A[i] - A[i - 1] == A[i - 1] - A[i - 2])
                dp[i] = 1 + dp[i - 1];
            sm += dp[i];
        }
        return sm;
    }
};
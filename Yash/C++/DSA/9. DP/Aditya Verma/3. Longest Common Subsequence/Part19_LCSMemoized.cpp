//https://leetcode.com/problems/longest-common-subsequence

//In this solution, we will encounter a Time Limit Exceeded Error because the dp array is being created at each call, increasing both time and space consumption. Thus, we need to create a global dp array to avoid TLE.
//Status : TLE
class Solution {
public:

    int helper(string &text1, string &text2, int m, int n)
    {
        //dp
        int dp[m+1][n+1];
        memset(dp,-1,sizeof(dp));

        if( m == 0 || n == 0)
        {
            return 0;
        }
        if(dp[m][n] != -1)
        {
            return dp[m][n];
        }

        //calls
        if(text1[m-1] == text2[n-1])
        {
            return dp[m][n] = helper(text1,text2,m-1, n-1) + 1;
        }
        else
        {
            return dp[m][n] = max(
                    helper(text1,text2,m-1,n),
                    helper(text1, text2, m, n-1)
            );
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();

        return helper(text1,text2, m,n);
    }
};




//Code With a global DP
//Status : Code Accepted

class Solution {
public:

    int helper(string &text1, string &text2, int m, int n,vector<vector<int>>& dp)
    {
        if( m == 0 || n == 0)
        {
            return 0;
        }
        if(dp[m][n] != -1)
        {
            return dp[m][n];
        }

        //calls
        if(text1[m-1] == text2[n-1])
        {
            return dp[m][n] = helper(text1,text2,m-1, n-1, dp) + 1;
        }
        else
        {
            return dp[m][n] = max(
                    helper(text1,text2,m-1,n,dp),
                    helper(text1, text2, m, n-1,dp)
            );
        }
    }
    int longestCommonSubsequence(string text1, string text2) {

        int m = text1.size();
        int n = text2.size();

        //dp
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1)); //created and filled matrix with -1

        return helper(text1,text2, m,n,dp);
    }
};
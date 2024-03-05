//LeetCode Link : https://leetcode.com/problems/is-subsequence

/*
    //string a = AXY
    //String b = ADXCPY
    //O/P = true
        LCS should be equal to one of the string.
        // a = AXYZ
        // b = ADXCPY
        //O/P = false
            LCS = AXY but Z is extra so false

    //Approach
    if LCS(a,b) == min(a,b)
        : true
    else
        : false
*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        if(m == 0)
        {
            return true; //empty string will always be in seqeuence
        }
        if(n == 0)
        {
            return false; //false because sequence can't be found
        }
        if(m>n)
        {
            return false; //string s must be smaller than string t to form a sequence
        }
        //dp
        int dp[m+1][n+1];
        //base-case
        for(int i = 0; i<=m; i++)
        {
            for(int j = 0; j<=n; j++)
            {
                if(i == 0 || j == 0)
                {
                    dp[i][j]= 0;
                }
                else
                {
                    dp[i][j] = -1;
                }
            }
        }
        //recursive-relation
        for(int i = 1; i<=m; i++)
        {
            for(int j = 1; j<=n; j++)
            {
                if(s[i-1] == t[j-1])
                {
                    dp[i][j]= dp[i-1][j-1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }

        if(dp[m][n] == min(m,n))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
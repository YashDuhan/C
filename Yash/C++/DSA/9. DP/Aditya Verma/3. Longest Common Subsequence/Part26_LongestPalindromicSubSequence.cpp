//LeetCode Link : https://leetcode.com/problems/longest-palindromic-subsequence/
/*
    //string a = agbcba
    //Output : 5
    Objective : find the Longest Palindromic subsequence(LPS)
        e.g :
            "abcba" is a subsequence
            "bcb" is a subsequence
            "bb" is a subsequence
            "b" is a subsequence
        The longest them is "abcba" with size = 5

    It's an LCS variation
    Approach :
        i) we will take text1 as "a"
        ii) we will take text2 as reverse of "a"
        iii) the LCS of text1 and text2 will be LPS
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int LPS(string text1, string text2)
{
    int m = text1.size();
    int n = text2.size();
    //dp
    int dp[m+1][n+1];
    //base-case
    for(int i = 0; i<=m; i++)
    {
        for(int j = 0; j<=n; j++)
        {
            if(i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else
            {
                dp[i][j] = -1;
            }
        }
    }
    //recursive-calls
    for(int i = 1; i<=m; i++)
    {
        for(int j = 1; j<=n; j++)
        {
             if(text1[i-1] == text2[j-1])
             {
                 dp[i][j] = dp[i-1][j-1] + 1;
             }
             else
             {
                 dp[i][j] = max(dp[i-1][j],
                                dp[i][j-1]);
             }
        }
    }

    return dp[m][n];
}

int main()
{
    string a = "agbcba";
    string b = a;
    reverse(b.begin(), b.end());
    cout << "LPS is " << LPS(a, b) << endl;
}

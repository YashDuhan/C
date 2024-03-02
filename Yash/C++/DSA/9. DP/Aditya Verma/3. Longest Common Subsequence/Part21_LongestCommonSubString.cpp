//Leetcode Link : https://leetcode.com/problems/maximum-length-of-repeated-subarray
/*
 // string a = abcde
 // string b = abfce
 //O/P = 2 (Length of longest common substring)
 In Longest common subsequence - abce (Order doesn't matter)
 In Longest common substring - ab (The order in which they are appearing matters)

 Code Variation :
    - The substring should be continuous
            - Create a variable ANS = 0
            -if x[N-1] == y[N-1] :
                     then x -->N-1(decreased the length of x by 1)
                     y -->N-1(decreased the length of y by 1)
                     and Add +1 for successfully matching combination
                     max(ANS,dp[i][j]
            -else :
                dp[i][j] = 0; //Breaking the continuity

            - return ANS


*/

#include <iostream>
#include <string>
using namespace std;

int LCS(string text1, string text2)
{
    int m = text1.size();
    int n = text2.size();
    //dp
    int dp[m+1][n+1];
    //base-case
    for(int i = 0; i<= m; i++)
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
    //recursive-code
    int ANS = 0;
    for(int i = 1; i<=m; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            if(text1[i-1] == text2[j-1])
            {
                dp[i][j] = dp[i-1][j-1] +1;
                ANS = max(ANS,dp[i][j]);
            }
            else
            {
                dp[i][j] = 0; //series discontinued
            }
        }
    }

    return ANS;
}

int main()
{
    string text1 = "abcde";
    string text2 = "abfce";
    cout << LCS(text1, text2);
}
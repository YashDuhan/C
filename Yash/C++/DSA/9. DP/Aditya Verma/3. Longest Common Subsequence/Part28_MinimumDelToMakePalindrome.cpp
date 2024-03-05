//LeetCode Link : https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/
//This Question cal also be asked as Minimum Insertions to make a string Palindrome
/*
    //a = "agbcba"
    //O/p = 1
    If we delete "g" then abcba will become a palindrome

    Reverse the string "a" as "b"
    Find LCS of a and b
    Ans = sizeof(a)-LCS(a,b)
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int LCS(string text1, string text2)
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
    //recursive-relation
    for(int i = 1;i<=m; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            if(text1[i-1] == text2[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i][j-1],
                               dp[i-1][j]);
            }
        }
    }

    return dp[m][n];
}

int MinDeletion(string a)
{
    string text2 = a;
    reverse(text2.begin(), text2.end());

    return a.size() - LCS(a, text2);
}

int main()
{
    string a = "agbcba";
    cout << "Min Deletions are : "<<  MinDeletion(a);
}
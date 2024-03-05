//Tabulation

#include <iostream>
#include <string>
using namespace std;

int helper(string text1, string text2, int m , int n)
{
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
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}

int LCS(string text1, string text2)
{
    int m = text1.size();
    int n = text2.size();
    return helper(text1,text2, m , n);
}

int main()
{
    string text1 = "abcdegh";
    string text2 = "abedfhr";
    cout << "LCS Tabulation : " << LCS(text1, text2) << endl;
}
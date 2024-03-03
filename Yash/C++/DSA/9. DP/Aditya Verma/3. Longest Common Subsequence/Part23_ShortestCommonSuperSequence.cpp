/*
 // a = "geek"
 // b = "eke"
//Output : Length of Shortest common supersequence
 We have to merge it in such a way that it forms the shortest common supersequence
 e.g
 a + b = geekeke (It has both the sequences geek and eke)
 a + b = geeke (It has both the sequences geek and eke) --Shortest

 Another example
 // a = AGGTAB
 // b = GXTXAYB

 Our objective is to merge them in such a way that we would have both the subsequence in our final string
 .eg
 a + b = AGGTGXABTATB
 a + b = AGGXTXAYB

 Order must be maintained but not necessary to be continues
 Watch the lec
*/
#include <iostream>
#include <string>
using namespace std;

int LCS(string text1, string text2, int m , int n)
{
    //dp
    int dp[m+1][n+1];
    //base-case
    for(int i = 0; i<=m;i++)
    {
        for(int j = 0; j<=n;j++)
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
    for(int i = 1; i<=m;i++)
    {
        for(int j = 1; j<=n; j++)
        {
            if(text1[i-1] == text2[j-1])
            {
                dp[i][j] = dp[i-1][j-1] +1;
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

int SCS(string text1, string text2)
{
    int m = text1.size();
    int n = text2.size();

    return (m+n - LCS(text1,text2, m ,n));
}

int main()
{
    string a = "geek";
    string b = "eke";
    cout << "Shortest Common SuperSequence " << SCS(a,b);
}

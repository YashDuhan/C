/*
 // string a = acbcf
 // string b = abcdaf
 // O/P : abcf (print the string)

 Watch the Lec
*/

#include <iostream>
#include <string>
#include <algorithm> //to use the reverse() function
using namespace std;

string LCS(string text1, string text2)
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
    for(int i = 1; i<=m; i++)
    {
        for(int j = 1; j<=n;j++)
        {
            if(text1[i-1] == text2[j-1])
            {
                dp[i][j] = dp[i-1][j-1] +1;
            }
            else
            {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    //calculating the result
    string result = "";
    int i = m;
    int j = n;
    while(i>0 && j>0) //we will reverse the process we did in recursive-relation
    {
        if(text1[i-1] == text2[j-1])
        {
            result.push_back(text1[i-1]);
            i--;
            j--;
        }
        else
        {
            if(dp[i][j-1] > dp[i-1][j])
            {
                j--;
            }
            else
            {
                i--;
            }
        }
    }
    //reversing the string
    reverse(result.begin(),result.end());

    return result;
}

int main()
{
    string a = "acbcf";
    string b = "abcdaf";
    cout << "LCS : " << LCS(a,b);
}
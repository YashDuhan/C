//Printing the supersequence
//LeetCode Link : https://leetcode.com/problems/shortest-common-supersequence/
#include <iostream>
#include <string>
#include <algorithm>
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
    //recursive-relation;
    for(int i = 1; i<=m ;i++)
    {
        for(int j =1; j<=n; j++)
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
    //making-string
    string result = "";
    int i = m;
    int j = n;

    while(i > 0 && j > 0)
    {
        if(text1[i-1] == text2[j-1])
        {
            result.push_back(text1[i-1]);
            i--;
            j--;
        }
        else
        {
            if(dp[i][j-1] < dp[i-1][j])
            {
                result.push_back(text1[i-1]); //merging the string
                i--;
            }
            else
            {
               result.push_back(text2[j-1]); //merging the string
                j--;
            }
        }
    }

    while(i>0) //since the above while loop had an AND condition and if the size of both the strings are different, then it's obvious that some strings are left to be merged
    {
        result.push_back(text1[i-1]); //if text1 charcs are still left
        i--;
    }
    while(j>0) //if text2 charcs are still left
    {
        result.push_back(text2[j-1]);
    }
    reverse(result.begin(), result.end());
    return result;
}

string SCS(string text1, string text2)
{
    return LCS(text1,text2);
}

int main()
{
    string a = "geek";
    string b = "eke";
    cout << "SCS is " << SCS(a,b);
}
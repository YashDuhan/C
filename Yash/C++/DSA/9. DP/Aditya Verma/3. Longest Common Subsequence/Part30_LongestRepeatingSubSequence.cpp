/*
 // To check if a subsequence is repeating or not
 //string a = "AABEBCDD"
 //O/P = 3
 here the subsequence is "ABD" and it's repeating twice thus it's the answer

    Approach:

    if we take an another string as b(b = a)
    then the LCS of a,b would be ABD
    and the items that will be excluded are
    B and C

    0   1   2   3   4   5   6   7
    A   A   B   E   B   C   D   D
    0   1   2   3   4   5   6   7
    hence
    for A :
        0   1
        A   A
        0   1
        (there diagonals are matching)
    for B :
        2   4
        B   B
        2   4
         (there diagonals are also matching)
    for E :
        3
        E
        3
         (they don't have any diagonals i==j)
    for C :
        5
        C
        5
         (they don't have any diagonals hence i == j)
    for D :
        6   7
        D   D
        6   7
         (there diagonals are matching)

    hence we can conclude that we don't have to include the cases where i == j
 */


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int LRS(string text1)
{
    string text2 = text1;
    int m = text1.size();
    int n = m;
    //dp
    int dp[m+1][n+1];
    //base-case
    for(int i = 0; i<=m; i++)
    {
        for(int j= 0; j<=n; j++)
        {
            if( i == 0 || j == 0)
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
            if(text1[i-1] == text2[j-1] && i != j) //Added the restriction
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

string printLRS(string text1)
{
    //If the question is to print the LRS then
    string text2 = text1;
    int m = text1.size();
    int n = m;
    //dp
    int dp[m+1][n+1];
    //base-case
    for(int i = 0; i<=m; i++)
    {
        for(int j= 0; j<=n; j++)
        {
            if( i == 0 || j == 0)
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
            if(text1[i-1] == text2[j-1] && i != j) //Added the restriction
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
	
	//To print the result, we will be using the Reverse of LCS
    string result = "";
    int i = m;
    int j = n;
    while(i>0 && j>0)
    {
        if(dp[i][j] == dp[i-1][j-1] + 1)
        {
            result.push_back(text1[i-1]);
            i--;
            j--;
        }
        else if(dp[i][j] == dp[i-1][j])
        {
            i--;
        }
        else if(dp[i][j] == dp[i][j-1])
        {
        	j--;
		}
    }
    reverse(result.begin(),result.end());
    return result;
}

int main()
{
    string a = "AABEBCDD";
    cout << "Longest Repeating SubSeq : " << LRS(a) << endl;
    cout << "Longest Repeating SubSeq is : " << printLRS(a) << endl;
}




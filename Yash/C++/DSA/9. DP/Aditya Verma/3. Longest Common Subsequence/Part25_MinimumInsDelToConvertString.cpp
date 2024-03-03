/*
    We need to write a program to find the minimum number of insertions or deletions to convert a string "a" into string "b"

    //string a = "heap"
    //string b = "pea"
    We have to convert a into b
    To convert string a into b
        a--->b
        heap ---> pea
            Adding a p infront of heap (Insertion : 1)
        p heap ---> pea
            Deleting h and last p (Deletion : 2)
        pea ---> pea
    //Output :
        Insertion : 1
        Deletion : 2

    In heap(string a) and pea(string b) the LCS is ea ----> "ea" is common in both
        To find the deletion : sizeof(a) - sizeof(LCS)
        To find the insertion : sizeof(b) - sizeof(LCS)
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int LCS(string text1, string text2, int m, int n)
{
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
    //recursive-call
    for(int i = 1; i<=m ;i++)
    {
        for(int j = 1; j<=n; j++)
        {
            if(text1[i-1] == text2[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else
            {
                dp[i][j] =  max(dp[i-1][j],
                                dp[i][j-1]);
            }
        }
    }

    return dp[m][n];
}

vector<int> convertString(string text1, string text2)
{
    int m = text1.size();
    int n = text2.size();
    int lcs = LCS(text1,text2,m,n);

    vector<int> result;
    int deletion = n-lcs;
    int insertion = m-lcs;
    result.push_back(deletion);
    result.push_back(insertion);

    return result;
}

int main()
{
    string a = "heap";
    string b = "pea";
    vector<int> result = convertString(a,b);
    cout << "Deletions : " << result[0] << endl;
    cout << "Insertion : " << result[1] << endl;
}

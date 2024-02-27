//Finding Max number of ways
/*
 //Arr of coin = {1,2,3}
 //Sum = 5
 //Output = 5
 Using this arr of coin we need to make the sum 5, and we are allowed to use a same coin more than once(thus it's an unbounded KnapSack)
 //Ways are :
 2+3 = 5
 1+2+2 = 5
 1+1+3 = 5
 1+1+1+2 = 5
 1+1+1+1+1 = 5

 //It's like a 0/1 Knapsack subset sum problem but with unbounded knapsack
*/

#include <iostream>
#include <vector>
using namespace std;


int coinChange(vector<int> arr, int sum, int size)
{
    int dp[sum+1][size+1];

    //base-case
    for(int i = 0; i<= sum; i++)
    {
        for(int j = 0; j<=size; j++)
        {
            if(j == 0 && i != 0)
            {
                dp[i][j] = 0;
            }
            else if(i == 0)
            {
                dp[i][j] = 1;
            }
            else
            {
                dp[i][j] = 0; //rest cells
            }
        }
    }

    //recursive-calls
    for(int i = 1; i<=sum; i++)
    {
        for(int j = 1; j<=size; j++)
        {
            if(arr[j-1] <= i)
            {
                dp[i][j] = dp[i-arr[j-1]][j] + dp[i][j-1]; //changed "dp[i-arr[j-1]][j-1]" to "dp[i-arr[j-1]][j]" j remained constant
            }
            else
            {
                dp[i][j] = dp[i][j-1];
            }
        }
    }
    return dp[sum][size];
}

int main()
{
    vector<int> arr = {1,2,5};
    int sum = 11;
    cout << coinChange(arr,sum,arr.size());
}
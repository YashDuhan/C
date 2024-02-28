//Minimum Number of Coins
/*
 Given
 //Arr = {1,2,3}
 //Sum = 5
 //Output = 2
 Now the number of way the sub 5 can be obtained is:
 2+3 = 5 ---- 2 Coins
 1+2+2 = 5 ---- 3 Coins
 1+1+3 = 5 ---- 3 Coins
 1+1+1+2 = 5 ---- 4 Coins
 1+1+1+1+1 = 5 ---- 5 Coins
 hence the output is 2

 */
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;


int coinChange(vector<int> arr, int amount)
{
    int size = arr.size();
    //dp
    int dp[size+1][amount+1];
    //base-cases
    memset(dp,-1,sizeof(dp));
    for(int i = 0; i<= size; i++)
    {
        for(int j = 0; j<= amount; j++)
        {
            if(j == 0)
            {
                dp[i][j] = 0;
            }
            else if(i == 0)
            {
                dp[i][j] = INT_MAX-1; //INT_MAX to handle overflow
            }
        }
    }
    //recursive-solution
    for(int i = 1; i<=size; i++)
    {
        for(int j = 1; j<=amount; j++)
        {
            if(arr[i-1] <= j)
            {
                dp[i][j] = min(1+dp[i][j-arr[i-1]], dp[i-1][j]); //+1 to include current element
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    /*
        //Now the main problem is
        if Input:
            coins(arr) = [2]
            amount = 3
            then output will be infinity;
        thus to tackle it, we will check if dp[size][amount] >= INT_MAX-1 then we will return -1
    */
    if(dp[size][amount] >= INT_MAX-1)
    {
        return -1;
    }
    else
    {
        return dp[size][amount];
    }
}

int main()
{
    vector<int> arr = {1,2,3};
    int sum = 5;
    cout << "Minimum number of coins required are : " << coinChange(arr,sum) << endl;
}
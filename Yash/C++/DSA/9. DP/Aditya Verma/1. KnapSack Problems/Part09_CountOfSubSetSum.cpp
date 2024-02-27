/*
 This problem also requires the concepts of CheckSubSetSum
 Assume an array {2,3,5,6,8,10}
 and given sum is 10
 So, Output = 3
 Because, the subsets that can be formed are {2,3,5} , {2,8} , {10}

 This time we will create a matrix of int

         Sum(5+1) --->
              0   1   2   3   4   5
    S   0 |   *   *   *   *   *   *   |
    I   1 |   *   *   *   *   *   *   |
    Z   2 |   *   *   *   *   *   *   |
    E   3 |   *   *   *   *   *   *   |
(4+1)   4 |   *   *   *   *   *   *   |


        When the sum is 0 it will only have one subset { } (empty set)
        and when the size is 0 it won't have any subset

         Sum(5+1) --->
              0   1   2   3   4   5
    S   0 |   1   0   0   0   0   0   |
    I   1 |   1   *   *   *   *   *   |
    Z   2 |   1   *   *   *   *   *   |
    E   3 |   1   *   *   *   *   *   |
(4+1)   4 |   1   *   *   *   *   *   |

*/


#include <iostream>
#include <vector>
using namespace std;

int countSubSet(vector<int> arr, int sum, int size)
{
    int dp[sum+1][size+1];

    for(int i = 0; i<= sum;i++)
    {
        for(int j = 0; j<= size;j++)
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
                dp[i][j]  = 0; //for the rest of the cells
            }
        }
    }

    //recursive relation

    for(int i = 1; i<=sum;i++)
    {
        for(int j = 1; j<=size;j++ )
        {
            if(arr[j-1] <= i)
            {
                dp[i][j] = dp[i-arr[j-1]][j-1] + dp[i][j-1]; //To increase the count
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
    vector<int> arr = {2,3,5,6,8,10};
    int sum = 10;
    int size = arr.size();
    cout << " The total number of subset exists are : "<<countSubSet(arr,sum,size) << endl;
}
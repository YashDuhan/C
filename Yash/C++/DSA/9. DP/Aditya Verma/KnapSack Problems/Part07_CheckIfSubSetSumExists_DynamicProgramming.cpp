/*
    Let's Assume that our sum is i and size is j
    and sum = 4 and size = 5
    So,now we will crate a matrix of dp[sum+1][size+1]

    our Matrix will look like

        Sum(5+1) --->
              0   1   2   3   4   5
    S   0 |   *   *   *   *   *   *   |
    I   1 |   *   *   *   *   *   *   |
    Z   2 |   *   *   *   *   *   *   |
    E   3 |   *   *   *   *   *   *   |
(4+1)   4 |   *   *   *   *   *   *   |

    <----------For Base-Cells---------->

    So, when Size == 0 and Sum == 0
        We will pass true because the subset will be {} (empty)
    When Size == 0 but sum != 0
        then we will pass false because there are no elements in array to form a subset
    When Sum == 0
        then we will pass true because no matter how big and array is we can always pass an empty {} subset

    Now our matrix will look like

            Sum(5+1) --->
              0   1   2   3   4   5
    S   0 |   T   F   F   F   F   F   |
    I   1 |   T   *   *   *   *   *   |
    Z   2 |   T   *   *   *   *   *   |
    E   3 |   T   *   *   *   *   *   |
(4+1)   4 |   T   *   *   *   *   *   |


    <----------For Other-Cells---------->
    We will pass false by default

    So, final matrix will look like

            Sum(5+1) --->
              0   1   2   3   4   5
    S   0 |   T   F   F   F   F   F   |
    I   1 |   T   F   F   F   F   F   |
    Z   2 |   T   F   F   F   F   F   |
    E   3 |   T   F   F   F   F   F   |
(4+1)   4 |   T   F   F   F   F   F   |

*/

#include <iostream>
#include <vector>
using namespace std;

bool isSubSet(vector<int> arr, int sum, int size)
{
    bool dp[sum+1][size+1];

    for(int i = 0; i<= sum;i++)
    {
        for(int j = 0; j<= size;j++)
        {
            if(j == 0 && i != 0)
            {
                dp[i][j] = false;
            }
            else if(i == 0)
            {
                dp[i][j] = true;
            }
            else
            {
                dp[i][j]  = false; //for the rest of the cells
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
                dp[i][j] = dp[i-arr[j-1]][j-1] || dp[i][j-1];
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
    vector<int> arr = {2,3,5,8};
    int sum = 9; //7,2
    int size = arr.size();
    if(isSubSet(arr,sum,size))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}
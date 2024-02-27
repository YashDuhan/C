/*
    The main objective of using the Memoization + Iteration method is to get the most optimized solution. While 90% of problems can be solved using Memoization + recursive calls, there are cases where this approach may lead to errors. To address this, we will completely omit the recursive part and solely solve the problem using Memoization and iteration. 

    Steps 
        Step 1: 
            Similar to 0-1 KnapSack, create a DP array initialise it with -1 
        Step 2:
            put 0 in the base cases; because the theif won't steal when either his bag's capacity or the number of items are zero
        Step 3: 
            i will be representing the number of elements and j will represent the capacity of sack
        Step 4: 
            Run the loop from i =1 and j =1 since, Zeroes are already covered in the base cases
        Step 5:
           Modify the recrusive relation into the iteration one; they  syntax will remain same 
*/


#include <iostream>
#include <cstring>
using namespace std;

class Item
{
    public:
    int weight;
    int value;
    Item(int weight, int value)
    {
        this->weight = weight;
        this->value = value;
    }
};


int KnapSack(Item arr[], int N, int capacity)
{
    //creating a dp matrix
    int dp[N+1][capacity+1];
    memset(dp,-1,sizeof(dp));

   //Making the 0th row and 0th column zero, it will then serve as a base case because when either N or capacity is 0, then we must return zero
    for(int i =0; i<N;i++)
    {
        for(int j = 0; j< capacity;j++)
        {
            if(i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }
/*
    The above segment will look like

    Before this loop

    | -1    -1    -1    -1  |
    | -1    -1    -1    -1  |
    | -1    -1    -1    -1  |
    | -1    -1    -1    -1  |
    | -1    -1    -1    -1  |

    After this loop

    | 0     0     0     0  |
    | 0    -1    -1    -1  |
    | 0    -1    -1    -1  |
    | 0    -1    -1    -1  |
    | 0    -1    -1    -1  |

    (All these zeros are base cases, and rows and columns represent N and capacity)
*/


   //Writing the iterative Solution
   //The loop for iterative solution will start from 1 because 0 is holding the base cases
   for(int i =1; i<=N;i++)
   {
    for(int j = 1; j<= capacity;j++)
   {
        if(arr[i-1].weight <= j)
        {
            dp[i][j] = max(arr[i-1].value + dp[i-1][j-arr[i-1].weight], dp[i-1][j]);
        }else 
        {
            dp[i][j] =  dp[i-1][j];
        }
   }
   }
   return dp[N][capacity];
}

int main()
{
    Item arr[] = {{1,10},{2,20},{3,30},{4,40}}; //Array of objects
    int N = sizeof(arr)/sizeof(arr[0]); //size of the array arr
    int capacity;
    cout << "Enter the capacity of KnapSack : ";
    cin >> capacity;
    cout << "The maxProfit our KnapSack can have is : " << KnapSack(arr,N,capacity) << endl;
}
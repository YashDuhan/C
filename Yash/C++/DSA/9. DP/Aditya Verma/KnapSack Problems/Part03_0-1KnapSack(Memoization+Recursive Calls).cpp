/*
    In the 0-1 Knapsack problem with Memoization and recursive calls, we follow a method similar to the recursive approach but with a matrix. This is done to fix the errors that occur in plain recursion such as stack overflow and time limit exceeded errors. That's why we are using a bottom-up approach.

    To implement memoization, we will create a matrix with dimensions dp[N+1][capacity+1]. We use N and capacity because their arguments are changing in the recursive function, and the reason behind N+1 and capacity+1 is to also include the 0th index.

    Now, we will use the memset function to initialize this matrix with -1. They will act as placeholders or the subproblems. Every time we solve a solution for a problem, we will replace the -1 with that solution to save it for future usage. Thus, if in the future a recursive call with the same arguments that has already been stored in the matrix appears, we will just return the answer from the matrix instead of traversing it again. 
    
    It can be checked via:

        if(dp[N][capacity] != -1)
        {
            return dp[N][capacity];
        }

    This will avoid any extra computations and If the answer is already present in the matrix, we will just
    return it
*/

#include <iostream>
#include <cstring> //to use the memset function
using namespace std;

class Item
{
    public:
    int weight;
    int value;
    Item(int weight, int value)
    {
        this->value = value;
        this->weight = weight;
    }
};

int KnapSack(Item arr[], int N, int capacity)
{
    int dp[N+1][capacity+1];
    memset(dp,-1,sizeof(dp)); //to set all the values as -1
    
    //base-case
    if(N == 0 || capacity == 0)
    {
        return 0;
    }

    if(dp[N][capacity] != -1)
    {
        return dp[N][capacity];
    }

    //recursive-calls
    
    if(arr[N-1].weight <= capacity)
    {
        return dp[N][capacity] = max(arr[N-1].value + KnapSack(arr,N-1,capacity-arr[N-1].weight),KnapSack(arr,N-1,capacity));
    }
    else if(arr[N-1].weight > capacity)
    {
        return dp[N][capacity] = KnapSack(arr,N-1,capacity);
    }
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
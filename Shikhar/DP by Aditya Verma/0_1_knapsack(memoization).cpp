#include<iostream>
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

int knapsack(Item arr[], int c, int N)
{
    int dp[N+1][c+1];
    memset(dp,-1,sizeof(dp));
    
    if(N==0 || c==0)
    {
        return 0;
    }
    
    if(dp[N][c] != -1){
        return dp[N][c];
    }
    if(arr[N-1].weight <= c)
    {
        int case1 = arr[N-1].value + knapsack(arr, N-1, c - arr[N-1].weight); 
        int case2 = knapsack(arr, N-1, c);
        return dp[N][c] = max(case1,case2);
    }
    else if(arr[N-1].weight > c)
    {
        return dp[N][c] = knapsack(arr,N-1,c);
    }
}

int main()
{
    Item arr[] = {{1,20},{2,30},{3,30},{4,50}};
    int N = sizeof(arr)/sizeof(arr[0]);
    int capacity;
    cout << "Enter the capacity : ";
    cin >> capacity;
    cout << knapsack(arr, capacity, N);
}
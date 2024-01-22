//It can be done using DP 

//Using Recursion
/*
#include <iostream>
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


int KnapSack(Item arr[], int capacity, int N)
{
    //base-case
    if(N == 0 || capacity == 0)
    {
        return 0;
    }

    if (arr[N-1].weight <= capacity)
    {
        return max(arr[N-1].value + KnapSack(arr, capacity - arr[N-1].weight, N-1), KnapSack(arr,capacity, N-1));
    }
    else if (arr[N-1].weight > capacity)
    {
        return KnapSack(arr, capacity, N-1);
    }
    
}

int main()
{
    Item arr[] = {{1,10},{2,10},{3,10},{4,10}};
    int N = sizeof(arr)/sizeof(arr[0]);
    int capacity; 
    cout << "enter the capacity : ";
    cin >> capacity;
    cout << "Max profit : " << KnapSack(arr,capacity, N);
}
*/

//Using DP

#include <iostream>
#include <cstring> //to use memset
using namespace std;


class Item
{
    public:
    int  weight;
    int value;
    Item(int weight, int value)
    {
        this->value = value;
        this->weight= weight;
    }
};

int KnapSack(Item arr[], int N , int capacity)
{
    int dp[N+1][capacity+1];
    memset(dp,-1,sizeof(dp));
    //base-case
    if(N == 0 || capacity == 0 )
    {
        return 0;
    }

    if(dp[N][capacity] != -1)
    {
        return dp[N][capacity];
    }

    //checking from the last index
    if(arr[N-1].weight <= capacity)
    {
        return dp[N][capacity] = max(arr[N-1].value + KnapSack(arr,N-1, capacity-arr[N-1].weight), KnapSack(arr,N-1,capacity));
    }
    else if(arr[N-1].weight > capacity)
    {
        return  dp[N][capacity] = KnapSack(arr,N-1,capacity);
    }

}

int main()
{
    Item arr[] = {{1,10},{2,10},{3,10},{4,10}};
    int N = sizeof(arr)/sizeof(arr[0]);
    int capacity;
    cout << "Enter the capacity : ";
    cin >> capacity;

    cout << "Answer is " << KnapSack(arr, N , capacity) << endl;
}
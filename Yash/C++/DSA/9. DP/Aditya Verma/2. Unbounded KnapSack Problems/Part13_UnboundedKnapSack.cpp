/*
    In 0/1 KnapSack each item will be processed once and will never be processed again in future but in an Unbounded KnapSack an element can have multiple instances.
    (can be used again/can put same item in the sack more than once)
    e.g :
    //Array arr = {{1,20},{3,400},{2,120}}
    and if the capacity is 6 then we will put {3,400} twice in the sack.

    The only difference will be that we won't be decreasing the size in the "if" loop and "else" loop will remain same
*/

#include <iostream>
#include <cstring>
#include <vector>
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

int unboundedKnapSack(vector<Item> arr,int capacity, int size)
{
    //creating-dp
    int dp[size+1][capacity+1];
    memset(dp,-1,sizeof(dp));

    //base-case
    for(int i = 0; i<=size; i++)
    {
        for(int j = 0; j<=capacity; j++)
        {
            if(i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }

    //recursive-relation
    for(int i = 1; i<= size; i++)
    {
        for(int j = 1; j<=capacity; j++)
        {
            if(arr[i-1].weight <= j)
            {
                dp[i][j] = max(arr[i-1].value + dp[i][j-arr[i-1].weight], dp[i-1][j]); //we used "dp[i][j-arr[i-1].weight]" instead of "dp[i-1][j-arr[i-1].weight]"
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp[size][capacity];
}

int main()
{
    vector<Item> arr = {{1,20},{2,130},{3,400}};
    int capacity;
    cout << "Enter the capacity : ";
    cin >> capacity;
    cout << "The result is " << unboundedKnapSack(arr,capacity,arr.size());
}
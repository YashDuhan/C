//Let's think of a recurisve approach first

/*
    Just like the scenario with Fractional Knapsack, imagine yourself as a thief. This time, however, there's a twist – you can only steal either the entire item or none of it. No partial thefts allowed. Unlike the previous scenario, there's no need to sort the items; we'll tackle this using recursion.
    
    
    • Base Case:
        The thief won't make off with anything if:
            • The shop is empty (size of N == 0).
            • He forgot to bring his bag/sack (capacity == 0).

    • Case 1:
        If the item's weight is less than the capacity, a decision must be made – to put it in the sack or leave it (based on potential profit).

    • Case 2:
        If the item's weight exceeds the capacity, there's no room for it; thus, we move directly to the next case.

    • Case 1 (Continued):
        Using the principles of recursion, we solve one problem at a time, allowing recursion to handle the rest. If the item fits in the sack, add the item's value to the Knapsack function for the remaining elements.
        To determine if the item fits, compare all stack calls and find the maximum value:
            max(arr[N-1].value + KnapSack(arr, N-1, capacity - arr[N-1].weight), KnapSack(arr, N-1,capacity));
            Here, N-1 represents the last element.

    • Case 2 (Continued):
        If the item doesn't meet the criteria, proceed to the next index by reducing the size:
            KnapSack(arr, N-1, capacity).
*/

#include <iostream>
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

int KnapSack(Item arr[], int N , int capacity)
{
    //base-case
    if(N == 0 || capacity == 0)
    {
        return 0;
    }

    //recursive-function
    if(arr[N-1].weight <= capacity)
    {
        int case1 = arr[N-1].value + KnapSack(arr,N-1,capacity-arr[N-1].weight); 
        int case2 = KnapSack(arr,N-1,capacity);
        return max(case1,case2);
    }
    else if(arr[N-1].weight > capacity)
    {
        return KnapSack(arr,N-1,capacity);
    }
}

int main()
{
    Item arr[] = {{1,20},{2,30},{3,30},{4,50}};
    int N = sizeof(arr)/sizeof(arr[0]);
    int capacity;
    cout << "Enter the capacity : ";
    cin >> capacity;
    cout << KnapSack(arr,N,capacity);
}
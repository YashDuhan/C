//It's not a DP problem but rather a greedy problem

#include <iostream>
#include <algorithm> //to use the sort function
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

bool compare(Item a, Item b)
{
    double r1 = static_cast<double>(a.value/a.weight);
    double r2 = static_cast<double>(b.value/b.weight);
    return r1 > r2;
}

double KnapSack(Item arr[], int N, int capacity)
{
    sort(arr, arr+N, compare); //This line is used to sort the array in descending order; the compare is acting as a comparator and it will decide how the array will be sorted
    double maxProfit;
    for(int i = 0; i< N; i++)
    {
        if(arr[i].weight <= capacity)
        {
            capacity = capacity- arr[i].weight;
            maxProfit = maxProfit + arr[i].value;
        }
        else
        {
            maxProfit = maxProfit + arr[i].value *(capacity/arr[i].weight);
        }
    }
    return maxProfit;
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
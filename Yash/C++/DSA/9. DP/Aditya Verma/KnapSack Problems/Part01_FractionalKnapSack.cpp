//It's not a DP problem but rather a greedy problem
/*
    Imagine that you're a thief and want to steal items from a general store. 
    The items in the store can be in any order.
    Assume this as the item array:
        Item arr = {{1,20},{2,30},{3,50},{4,30}};
        where they represent the weight and value, respectively. In {1,20} 1 is the weight, and 20 is the value.
        
    Now, the thief is also carrying a sack that can carry a specific amount of weight; the sack can't accommodate more weight than that value.
    
    Steps:

    Step 1:
        • Sort all the items in the shop in descending order.To sort them, use the STL sort function (include #include <algorithm>).
            Function: sort(arr, arr+N, compare);
            Here, arr represents the beginning of the array, arr + N represents the end of the array, and compare is used as a comparator.
            The compare function takes two objects as input (e.g., A and B). It compares A.value/A.weight (R1) with B.value/B.weight (R2) and returns true when R1 > R2.

        • Taking the example of the above array:
            Item arr = {{1,20},{3,50},{2,30},{4,30}};
            20/1 = 20
            30/2 = 15
            50/3 = 16.66
            30/4 = 7.5

        • Now, in descending order, the array will look like {{1,20},{3,50},{2,30},{4,30}}.

    Step 2:
        • Use a loop to iterate through the N numbers of items one by one.
            • For the first element (that will give us the max profit), check if its weight is less than or equal to the capacity of the sack. If true,
            then:
                finalProfit += arr[i].value; // The profit will be added
                capacity -= arr[i].weight; // The capacity of the sack will be shrunk

    Step 3:
        • If (arr[i].weight > capacity), then take a specific part of the item. It can be written as:
            finalProfit = finalProfit + arr[i].value * (capacity/arr[i].weight);
            Break the loop because the sack's size would have been filled by now.

    Step 4:
        • Return the maxProfit.
*/
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
    double r1 = static_cast<double>(a.value)/a.weight;
    double r2 = static_cast<double>(b.value)/b.weight;
    return r1 > r2;
}

double KnapSack(Item arr[], int N, int capacity)
{
    sort(arr, arr+N, compare); //This line is used to sort the array in descending order; the compare is acting as a comparator and it will decide how the array will be sorted
    double maxProfit = 0.00;
    for(int i = 0; i< N; i++)
    {
        if(arr[i].weight <= capacity)
        {
            capacity = capacity- arr[i].weight;
            maxProfit = maxProfit + arr[i].value;
        }
        else
        {
            maxProfit += arr[i].value *(static_cast<double>(capacity)/arr[i].weight);
        }
    }
    return maxProfit;
}

int main()
{
    Item arr[] = {{1,20},{2,30},{3,50},{4,30}}; //Array of objects
    int N = sizeof(arr)/sizeof(arr[0]); //size of the array arr
    int capacity;
    cout << "Enter the capacity of KnapSack : ";
    cin >> capacity;
    cout << "The maxProfit our KnapSack can have is : " << KnapSack(arr,N,capacity) << endl;
}

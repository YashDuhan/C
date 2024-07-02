#include <iostream>
#include <algorithm>
using namespace std;

class Item{
public:
    int weight;
    int price;
    Item(int weight, int price){
        this->weight = weight;
        this->price = price;
    }
};

bool customCompare(Item x, Item y){
    double item1 = static_cast<double>(x.weight)/(x.price);
    double item2 = static_cast<double>(y.weight)/(y.price);
    return item1 > item2;
}

double FractionalKnapSack(Item arr[], int size, int capacity){
    sort(arr,arr+size,customCompare);
    double finalProfit = 0.00;
    for(int i = 0; i<size; i++)
    {
        if(arr[i].weight <= capacity){
            finalProfit += arr[i].price;
            capacity -= arr[i].weight;
        }
        else{
            finalProfit += arr[i].price *(static_cast<double>(capacity)/arr[i].weight);
            break;
        }
    }
    return finalProfit;
}

int main(){
    Item arr[] = {{1,30},
                  {5,100},
                  {10,500},
                  {2,1000},
                  {10,20},
                  {40,1005}};
    int size = sizeof(arr)/sizeof(arr[0]);
    int capacity;
    cout << "Enter capacity : ";
    cin >> capacity;
    cout << "Fractional Knapsack : " << FractionalKnapSack(arr,size,capacity);
}
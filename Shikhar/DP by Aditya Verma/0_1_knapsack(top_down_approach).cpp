#include<iostream>
using namespace std;

class items
{
public:
    int weight;
    int value;
    
    items(int weight, int value){
        this->weight = weight;
        this->value = value;
    }
};

int knapsack(items arr[], int capacity, int N){
    
    int dp[N+1][capacity+1];
    
    for(int i=0; i<N+1; i++){
        for(int j=0; j<capacity+1; j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
            else{
                if(arr[i-1].weight <= j){
                    dp[i][j] = max((arr[i-1].value + dp[i-1][j - arr[i-1].weight]), dp[i-1][j]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
    }
    return dp[N][capacity];
}

int main()
{
    items arr[] = {{1,20},{2,30},{3,30},{4,50}};
    int N = sizeof(arr)/sizeof(arr[0]);
    int capacity;
    cout << "Enter the capacity : ";
    cin >> capacity;
    cout << knapsack(arr, capacity, N);
    
    return 0;
}
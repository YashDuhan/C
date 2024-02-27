/*
 Imagine an array 1 2 3 4 5 6 7 8 9 and we are given that the sum is 17, so 17 can be formed in multiple ways like {9,8} {8,7,2} {9,6,2} {4,5,8} {1,2,3,4,7} ....etc
 Now, In this problem we are only required to check if the subset exists or not, we don't have to print the subset.

 This problem is similar to that 0-1 KnapSack
 Imagine that
    arr = [2,3,5,7,8]
    Sum = 9
    Size = 5
We will check each and every index and will check if we should take it or not
    if the arr[index] <= sum
        sum-arr[index]
        size-1
        while also recursively calling the same function on the other part
    else
        same function on size-1;
 */

#include <iostream>
#include <vector>
using namespace std;
bool isSubset(vector<int> arr, int sum, int size)
{
// Base cases
    if (size == 0 && sum != 0)
    {
        return false; // Subset not possible
    }
    if (sum == 0)
    {
        return true; // Subset with the given sum found
    }
// Recursive relation
    bool include = (arr[size - 1] <= sum && isSubset(arr, sum - arr[size - 1], size - 1));
    bool exclude = isSubset(arr, sum, size - 1);
    return include || exclude;
}
int main()
{
    vector<int> arr = {2, 3, 5, 7, 8};
    int sum = 9; // Target sum for the subset{2,7}
    int size = arr.size();
    if (isSubset(arr, sum, size))
    {
        cout << "True (Subset exists)";
    }
    else
    {
        cout << "False (Subset doesn't exist)";
    }
}
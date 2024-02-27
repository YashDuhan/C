/*
 This Problem uses the concept of CheckSubSetSum

 Assume an array {1,5,11,5}
 Now this array can be divided into 2 equal partitions
 i.e {1,5,5} and {11}
 This size of the subsets can vary but their sum will be same

 Approach:
            to find the length of partition we must need to divide the sum/2
 e.g 1+5+11+5 = 22 and 22/2 = 11 Thus, the size of any one partition should be 11,
 and we can use the SubSetSum method to check if any subset with size 11 exists or not
 if exists then we can simply return true

 hence our main condition is
 sum%2 == 0:
    checkSubsetSum(arr,sum%2,size)
 else:
    false;


    <----------else condition---------->
    Assume arr = {1,5,11,5,1}
    sum = 23
    Now, no matter what the values are it can never be partitioned hence we will directly return false

    <----------if condition---------->
    It's not necessary that if the sum is even then they must have an equal partition
    e.g  arr = {1,5,11,5,4}
    here sum is 26 (even) but it can't be partitioned into the sum of 13-13 subset
*/


#include <iostream>
#include <vector>
using namespace std;


bool isSubSet(vector<int> arr, int sum, int size)
{
    //dp
    bool dp[sum+1][size+1];
    //base-cells
    for(int i = 0; i <= sum; i++)
    {
        for(int j = 0; j<= size; j++)
        {
            if(j == 0 && i != 0)
            {
                dp[i][j] =false;
            }
            else if(i == 0)
            {
                dp[i][j] = true;
            }
            else
            {
                dp[i][j] = false;
            }
        }
    }

    //recursive-relation
    for(int i = 1; i<= sum;i++)
    {
        for(int j = 1; j <= size; j++)
        {
            if(arr[j-1] <= i)
            {
                dp[i][j] = dp[i-arr[j-1]][j-1] || dp[i][j-1]; // include || exclude
            }
            else
            {
                dp[i][j] = dp[i][j-1];
            }
        }
    }
    return dp[sum][size];
}

bool equalSumPartition(vector<int> arr, int size)
{
    int sum = 0;
    for(int i = 0; i<size;i++)
    {
        sum += arr[i];
    }

    if(sum%2 == 0)
    {
        return isSubSet(arr,sum/2,size);
    }
    else
    {
        return false;
    }
}

int main()
{
    vector<int> arr = {1,5,11,5};
    int size = arr.size();
    if(equalSumPartition(arr,size))
    {
        cout << "True(Yes, Exists)" << endl;
    }
    else
    {
        cout << "False(No, Doesn't Exists)" << endl;
    }
}


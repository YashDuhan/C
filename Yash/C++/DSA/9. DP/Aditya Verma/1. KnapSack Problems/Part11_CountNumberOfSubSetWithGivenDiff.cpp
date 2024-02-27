/*
 this problem is just like the previous problem but this time we are given the difference between 2 subsets,

 //Array is {1,1,2,3}
 //Given difference is 1
 //O/P is 3(Number of combinations with 1 as subset difference)
Subsets are :
    i)   {1,3} & {1,2} ---> Sum of Difference is 1
    ii)  {1,3} & {1,2} ---> Sum of Difference is 1(The array had two 1s)
    iii) {1,1,2} & {3} ---> Sum of Difference is 1

    Watch the Lecture
    To find the count of S1
    Sum(S1) = (diff + sum(arr))/2
    return count of S1
 */

#include <iostream>
#include <vector>
using namespace std;

int countSubSetSum(vector<int> arr, int sum, int size)
{
    int dp[size+1][sum+1];

    //base-case
    for(int i = 0; i<= size; i++)
    {
        for(int j = 0; j<=sum; j++)
        {
            if(i == 0 && j != 0)
            {
                dp[i][j] = 0;
            }
            else if(j == 0)
            {
                dp[i][j] = 1;
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    //recursive-calls
    for(int i = 1; i<= size; i++)
    {
        for(int j = 1; j<=sum; j++)
        {
            if(arr[i-1] <= j)
            {
                dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[size][sum];
}


int countSubSetWithDiff(vector<int> arr, int diff)
{
    int sum = 0;
    for(int i = 0; i< arr.size(); i++)
    {
        sum+=arr[i];
    }
    int S1 = (diff + sum)/2;

    return countSubSetSum(arr,S1,arr.size());

}

int main()
{
vector<int> v1 = {1,1,2,3};
int dif = 1;
cout << "Total number of subsets are : " << countSubSetWithDiff(v1,dif);
}
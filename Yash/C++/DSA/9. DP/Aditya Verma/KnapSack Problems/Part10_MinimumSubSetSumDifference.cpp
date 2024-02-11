//This program will only work for positive inputs it will not work for negative values

/*
 arr = 1 6 11 5
 O/P = 1
 Let's Assume the pairs as {1,6} and {11,5}
 Now the difference of their sum is 7 and 16 = 9(not minimum can have a better solution)
 Another pair is {1,6,5} -{11} = 1 Ans

 //In equal sum partition the requirement was (Subset1 - Subset2 = 0) i.e. SubSet1 = SubSet2
 and here we want to find the (Subset1 - Subset2 = minimum_value)

 Now,Like the equal sum partition question we need to find the range under which our sum/difference may lie
 So the least difference a subset can have is 0 for a null array
 and max difference it can have is the sum of all elements(i.e. we took the whole array)

 Watch the lec for better understanding

*/

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int> findSubSet(vector<int> arr, int sum, int size)
{
    vector<int> result;
    bool dp[sum+1][size+1];
    memset(dp,false,sizeof(dp));

    //base-case
    for(int i = 0; i<= sum; i++)
    {
        for(int j = 0 ; j <= size; j++)
        {
            if(i == 0)
            {
                dp[i][j] = true;
            }
        }
    }

    //filling-cells
    for(int i = 1; i<= sum; i++)
    {
        for(int j = 1; j<=size; j++)
        {
            if(arr[j-1] <= i)
            {
                bool include = dp[i-arr[j-1]][j-1];
                bool exclude = dp[i][j-1];
                dp[i][j] = include || exclude;
            }
            else
            {
                dp[i][j] = dp[i][j-1];
            }
        }
    }

    //to-store all the valid answers
    for(int i = 0; i<= sum; i++)
    {
        if(dp[i][size] != false)
        {
            result.push_back(i);
        }
    }

    return result;
}

int MinimumSubSetSum(vector<int> arr)
{
    int total_sum = 0;
    for(int i = 0; i< arr.size(); i++)
    {
        total_sum+=arr[i];
    }
    vector<int> result = findSubSet(arr,total_sum,arr.size());
    int min_value = INT_MAX;

    for(int i = 0; i<result.size()/2; i++) //used size/2 to only get the smaller values
    {
        min_value = min(min_value,abs(total_sum - 2*(result[i])));
    }

    return min_value;
}

int main()
{
    vector<int> arr = {3,9,7,3};
    cout << "The minimum SubSetSum Difference is " << MinimumSubSetSum(arr) << endl;
}
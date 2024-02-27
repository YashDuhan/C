/*
    //Given an array arr = 1 1 2 3
    //Given sum is 1
    //O/P : 3(Total combinations)
    We can add either a '+' or a '-' symbol in-front of the number to make their sum 1
    e.g
    +1 -1 -2 +3 = 1
    -1 +1 -2 +3 = 1 (both the 1s are being treated as different element)
    +1 +1 +2 -3 = 1


    This problem is exactly similar to Part11_CountNumberOfSubSetWithGivenDiff
    
    Things to keep in mind while submitting code on Leetcode:
	1. check if (sum+d)%2!=0 becuase if their sum is odd then there cannot be two partitions.
	2. check if sum<target because if total sum is less than the target then it is impossible to create 2 partitions.
	3. Also check if sum+target < 0 to avoid negative numbers
	4. start the 2nd j loop(Sum LOOP) from 0 because we want to consider sums that are equal to zero as well while filling up the matrix.
*/

#include <iostream>
#include <vector>
using namespace std;



int countSubSetSum(vector<int> arr, int sum, int size)
{
	int dp[sum+1][size+1];
	
	//base-case
	for(int i = 0; i<= sum; i++)
	{
		
		for(int j = 0; j<=size; j++)
		{
			if( j == 0 && i != 0)
			{
				dp[i][j] = 0;
			}
			else if(i == 0)
			{
				dp[i][j] = 1;
			}
			else
			{
				dp[i][j] = 0;
			}
		}
	}
	
	//recursive-relation
	for(int i = 1; i<=sum; i++)
	{
		for(int j = 1; j<=size; j++)
		{
			if(arr[j-1] <= i)
			{
				dp[i][j] = dp[i-arr[j-1]][j-1] + dp[i][j-1];
			}
			else
			{
				dp[i][j] = dp[i][j-1];
			}
		}
	}
	return dp[sum][size];
}

int targetSum(vector<int> arr, int sum)
{
    int totalsum = 0;
    for(int i= 0; i<arr.size(); i++)
    {
        totalsum+=arr[i];
    }
    int S1 = (totalsum+sum)/2;

    return countSubSetSum(arr, S1, arr.size());
}


int main()
{
    vector<int> v1 = {1,1,2,3};
    int sum = 1; //target
    cout << "Target Sum is : " << targetSum(v1, sum);
}




//Code for LeetCode

class Solution {
public:
    int countSubSet(vector<int> arr, int sum, int size)
    {
        int dp[sum+1][size+1];
        //base-case
        for(int i = 0; i<= sum; i++)
        {
            for(int j = 0; j<=size; j++)
            {
                if( j == 0 && i != 0)
                {
                    dp[i][j] = 0;
                }
                else if(i == 0)
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
        for(int i = 0; i<= sum ; i++)
        {
            for(int j = 1; j<=size; j++)
            {
                if(arr[j-1]<= i)
                {
                    dp[i][j] = dp[i-arr[j-1]][j-1] + dp[i][j-1];
                }
                else
                {
                   dp[i][j] =  dp[i][j-1];
                }
            }
        }
        return dp[sum][size];
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for(int i = 0; i< nums.size(); i++)
        {
            sum+=nums[i];
        }
        if((sum + target)%2 != 0 || (sum + target) < 0 || sum < target )
        {
            return 0;
        }

        int S1 = (sum+target)/2;      
        return countSubSet(nums,S1, nums.size());
    }
};

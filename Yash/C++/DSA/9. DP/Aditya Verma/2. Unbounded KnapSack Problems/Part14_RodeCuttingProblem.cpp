//Rode cutting is exactly similar to Unbounded KnapSack
//The code will remain same
//https://www.geeksforgeeks.org/problems/rod-cutting0840/1


class Solution{
public:

    int unboundedKnapSack(vector<int> length, int price[], int n, int size)
    {
        //dp
        int dp[size+1][n+1];
        memset(dp,0,sizeof(dp));

        //recursive-relation
        for(int i = 1; i<=size; i++)
        {
            for(int j = 1; j<=n; j++)
            {
                if(length[i-1] <= j)
                {
                    dp[i][j] = max(price[i-1] + dp[i][j-length[i-1]], dp[i-1][j]);
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[size][n];
    }
    int cutRod(int price[], int n) {
        //code here
        vector<int> length; //created a length array
        for(int i = 1;i<=n;i++)
        {
            length.push_back(i);
        }

        return unboundedKnapSack(length,price,n,n);

    }
};


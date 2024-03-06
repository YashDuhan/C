/*
    //Matrix Chain Multiplication variations

    1. MCM
    2. Printing MCM
    3. Evaluate expression to true / Boolean Parenthesization
    4. Max Value of an exp
    5. Palindrome Partitioning
    6. Scramble String
    7. Egg Dropping


    Approach :
            Imagine an array with
                              k   k   k   k   k
                        [ X   X   X   X   X   X   X]
                          ^(i)                   ^(j)
                    (at any most left       (at any most right side
                    side of the array)       of an array)
            Our main objective is to break the array by repetitvely finding the temp answers at each instance of k
            [X  X   X   X   X   X   X   X]
                        /  \
         [X    X   X   X]   [X  X   X   X]
         ^(i)       (k)^     ^(k+1)      ^(j)
 */

//Basic(Template Code)

int solve(int arr[], int i, int j)
{
    //base-case
    if(i>j) //since i is the left most and j is the right most then it's obvious that i<j
    {
        return 0;
    }

    for(int  k = i; k<j; k++)
    {
        int temp_ans = solve(arr, i, k) +/- solve(arr,k+1, j);
        int ans = ans ---> temp_ans; // (calculate ans using function)
    }
    return ans;
}
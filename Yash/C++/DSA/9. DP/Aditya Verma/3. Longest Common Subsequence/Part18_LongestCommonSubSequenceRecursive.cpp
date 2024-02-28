/*
    Given
    //string x has  x : a b c d g h
    //string y has  y : a b e d f h r
    //Output is : 4
        because a b d h (Elements that are common)

    Q. Difference between Longest common substring and longest common subsequence?
    Ans  - In longest common subsequence we are allowed to pick items by skip any other item in between
                e.g //x : a b c d g h
                    //y : a b e d f h r
                    Result = a b d h
                    Size = 4
         - In longest common substring we aren't allowed to skip any item(string should be exactly similar)
                e.g //x : a b c d g h
                    //y : a b e d f h r
                    Result : a b
                    Size = 2


 Since we are solving it with recursion
 we need to think
    1. base case
    2. choice diagram
    3. input small


        - 1. Base Case : (think of the smallest valid input)
                         i) if either of the strings are empty( x == 0 or y == 0) then return 0
        - 2. Choice Diagram :
                                x : a b c d g h
                                y : a b e d e h

                                Iteration 1 :  We first checked the last element of both of strings
                                                - if x[N-1] == y[N-1] :
                                                    then x -->N-1(decreased the length of x by 1)
                                                         y -->N-1(decreased the length of y by 1)
                                                         and Add +1 for successfully matching combination
                                                - if x[N-1] != y[N-1] :
                                                    then we will have 2 choices
                                                    i) take the full x string and decrease the size of y string by 1
                                                    ii) take the full y string and decrease the size of x string by 1
                                                    iii) find the maximum of i) and ii)
        - 3. Input Small : (input can be made smaller by)
                         i) calling the function onto N-1 (N is the size of the string)


 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int LCS(vector<string> s1, vector<string> s2, int m , int n)
{
    //base-case
    if(m == 0 || n == 0)
    {
        return 0;
    }

    //recursive-relation
    if(s1[m-1] == s2[n-1])
    {
        return LCS(s1,s2,m-1,n-1) + 1; //Decreased size and Added +1 to increase count
    }
    else
    {
        return max(
                LCS(s1,s2,m-1,n), //Only decreased the size of S1
                LCS(s1,s2,m,n-1) //Only decreased the size of S2
        );
    }
}

int main()
{
    vector<string> s1 = {"a", "b", "c", "d", "g","h"};
    vector<string> s2 = {"a", "b", "e", "d", "e", "h", "r"};
    int m = s1.size();
    int n = s2.size();

    cout << "LCS is " << LCS(s1,s2,m,n);
}

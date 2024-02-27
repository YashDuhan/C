//T.C : O(n^2)

#include <iostream>
#include <vector>
using namespace std;


vector<vector<int> > SubSet(int arr[], int sum, int size)
{
    vector<vector<int> > result;
    for(int i = 0; i<size; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if(arr[i]+arr[j] == sum)
            {
                vector<int> pair;
                pair.push_back(arr[i]);
                pair.push_back(arr[j]);
                result.push_back(pair);
            }
        }
    }
    return result;
}

int main()
{
    int arr[] = {2,3,4,5,6,7};
    int sum;
    cout << "Enter sum : ";
    cin >> sum;
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<vector<int> > result = SubSet(arr,sum,size);
    for(int i = 0; i< result.size();i++)
    {
        cout << "Pair " << i+1 << " is : ";
        for (int j = 0; j < result[i].size(); j++)
            cout << result[i][j] << " , ";

        cout << endl;
    }
}

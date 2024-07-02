#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {0,0,1,1,2,3,4,4,4,5,5};
    int count = 0;
    int n = nums.size();
    for(int i = 1; i< n; i++){
        cout << "For index " << i << endl;
        if(nums[i] == nums[i-1]){
            cout << nums[i] << " is equals to " << nums[i-1] << endl;
            count++;
        }
        else{
            cout << nums[i-count] << " is replaces with " << nums[i] << endl;
            nums[i-count] = nums[i];
        }
    }
    cout << n-count;
    cout << endl;
    for(int i = 0; i<nums.size(); i++){
        cout << nums[i] << " , ";
    }
}
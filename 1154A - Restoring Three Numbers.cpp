#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int input;
    vector<int> nums;
    
    while(cin >> input) nums.push_back(input);
    
    sort(nums.begin(), nums.end());
    
    cout << nums[3] - nums[0] << " " << nums[3] - nums[1] << " " << nums[3] - nums[2];
}

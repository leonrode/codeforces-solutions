
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;
    
    cin >> a >> b >> c;
    
    int dist = 0;
    
    vector<int> nums = {a, b, c};
    
    sort(nums.begin(), nums.end());
    
    dist += (nums[1] - nums[0]) + (nums[2] - nums[1]);
    
    cout << dist;
    return 0;
}

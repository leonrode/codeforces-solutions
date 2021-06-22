
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    
    
    
    int max = *(max_element(nums.begin(), nums.end()));
    
    int ans = 0;
    for (int i = 0; i < nums.size(); i++) {
        ans += max - nums[i];
    }
    
    cout << ans << endl;
    
    
    return 0;
}

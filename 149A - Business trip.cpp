
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int k;
    cin >> k;
    
    vector<int> nums;
    int n;
    while (cin >> n) nums.push_back(n);
    
    
    // calc
    
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if (sum < k) cout << "-1";
    else {
            int s = k;
    int i = 0;
    while (s > 0) {
        auto it = max_element(nums.begin(), nums.end());
        int max = *it;
        s -= max;
        nums.erase(it);
        i++;
    }
    
    cout << i;
    }
    
    

    return 0;
}

    


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int ans = 0;
    
    
    int cash[5] = {1, 5, 10, 20, 100};
    
    while (n != 0) {
        for (int i = 4; i >= 0; i--) {
            if (n >= cash[i]) {
                int count = floor(n / cash[i]);
                ans += count;
                n -= count * cash[i];
            }
        }
    }
    
    
    
    cout << ans;
}

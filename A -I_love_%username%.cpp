#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
 
int main()
{
    int n;
    vector<int> scores;
    
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        if (i != 0) {
            auto  max= max_element(scores.begin(), scores.end());
        auto min = min_element(scores.begin(), scores.end());
 
        if (s > *max || s < *min) ans++;
        }
        
        scores.push_back(s);
    }
    
 
    
    cout << ans;
}

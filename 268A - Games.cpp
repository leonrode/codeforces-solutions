
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> guestColors;
    
    vector<int> hostColors;
    
    for (int i = 0; i < n; i++) {
        int h, g;
        cin >> h >> g;
        hostColors.push_back(h);
        guestColors.push_back(g);
    }
    
    int ans = 0;
    for (int i = 0; i < hostColors.size(); i++) {
        
        ans += std::count(guestColors.begin(), guestColors.end(), hostColors[i]);
    }
    
    cout << ans << endl;
}

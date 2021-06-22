#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main()
{
    vector<int> vec;
    int ans = 0;
    
    for (int i = 0; i < 4; i++) {
        int n;
        cin >> n;
        // if n is in the list, increase ans;
        if (std::find(vec.begin(), vec.end(), n) != vec.end()) ans++;
        vec.push_back(n);
    }
    
    cout << ans;
    
 
}

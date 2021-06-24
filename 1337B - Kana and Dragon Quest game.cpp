#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        
        int x, n, m;
        cin >> x >> n >> m;
        
        while ( x > 0 && n != 0 && x/2 + 10 < x) {
            n--;
            x = x / 2 + 10;
        }
        
        while (m) {
            m--;
            x -= 10;
        }
        
        if (x <= 0) cout << "YES\n";
        else cout << "NO\n";
        
    }
}

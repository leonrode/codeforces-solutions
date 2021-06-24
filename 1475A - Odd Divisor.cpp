#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long n;
        cin >> n;
        
        if (n & (n - 1)) cout << "YES\n";
        else cout << "NO\n";
    }
}


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    
    
    int n, k;
    cin >> n >> k;
    
    int tr = 240 - k;
    int c = 0;
    int i = 1;
    int ts = 0;
    while (ts + 5 * i <= tr && c + 1 <= n) {
        ts += 5 * i;
        i++;
        c++;
    }
    
    cout << c;
}

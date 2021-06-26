
#include <iostream>

using namespace std;

int main()
{
    int k, n, w;
    
    cin >> k >> n >> w;
    int s = 0;
    for (int i = 1; i <= w; i++) {
        s += i * k;
    }
    
    if (s > n) cout << s - n;
    else cout << 0;
}

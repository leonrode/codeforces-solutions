#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    
    int ans = 0;
    int i = 1;
    while (n != 0) {
        if (i % m == 0) n+=1;
        i++;
        n--;
        ans++;
        
    }
    cout << ans;
}

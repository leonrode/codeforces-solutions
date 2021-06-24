#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    int n;
    cin >> n;
    
    int i;
    int l = 0;
    int best = 0;
    int ans = 0;
    while (cin >> i) {
        if (l == 0) l = i;
        if (i >= l) {
            ans++;
            
        } else {
            
            if (ans > best) best = ans;
            
            ans = 1;
        }
        l =i;
    }
    
    if (ans > best) best = ans;
    
    cout << best << endl;
    return 0;
}

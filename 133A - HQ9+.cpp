#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    bool yes = false;
    
    string p;
    cin >> p;
    
    for (int i = 0; i < p.length(); i++) {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') yes = true;
    }
    
    cout << (yes ? "YES" : "NO");
    
}

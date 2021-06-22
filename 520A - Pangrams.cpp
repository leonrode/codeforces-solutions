
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s = "abcdefghijklmnopqrstuvwxyz";
    
    int n;
    string st;
    
    cin >> n >> st;
    bool ok = true;

    for (int i = 0; i < s.length(); i++) {
        auto li = std::find(std::begin(st), std::end(st), s[i]);
        
        auto ui = std::find(std::begin(st), std::end(st), toupper(s[i]));
        
        if (li == std::end(st) && ui == std::end(st)) {
            ok = false;
        }
    }
    
    if (ok) cout << "YES";
    else cout << "NO";
}


#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    
    transform(begin(s1), end(s1), begin(s1), [](char c){return tolower(c);});
    
    transform(begin(s2), end(s2), begin(s2), [](char c){return tolower(c);});
    
    
    if (string(s1) > s2) cout << 1;
    else if (string(s1) == s2)  cout << 0;
    else cout << -1;

    return 0;
}

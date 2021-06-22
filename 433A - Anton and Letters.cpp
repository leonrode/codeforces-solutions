#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int ans = 0;
    
    string s;
    
    getline(cin, s);
    
    vector<char> chars;

    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '{' && s[i] != '}' && s[i] != ' ' && s[i] != ',') {
            if (std::find(chars.begin(), chars.end(), s[i]) == chars.end()) {
                ans++;
                chars.push_back(s[i]);
            }
        }
    }
    
    cout << ans << endl;

    return 0;
}

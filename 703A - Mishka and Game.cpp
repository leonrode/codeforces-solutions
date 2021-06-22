
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int m = 0;
    int c = 0;
    
    for (int i = 0; i < n; i++) {
        int s1, s2;
        cin >> s1 >> s2;
        
        if (s1 > s2) m += 1;
        else if (s2 > s1) c += 1;
    }
    
    if (m == c) {
        cout << "Friendship is magic!^^";
    } else if (m > c) {
        cout << "Mishka";
    } else if (c > m) {
        cout << "Chris";
    }

    return 0;
}

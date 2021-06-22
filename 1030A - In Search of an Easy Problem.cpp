
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int s = 0;
    for (int i = 0 ; i < n; i++) {
        int a;
        cin >> a;
        s += a;
    }
    
    if (s == 0) {
        cout << "EASY";
    } else {
        cout << "HARD";
    }
}


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    
    cin >> n >> m;
    
    bool right = true;
    
    for (int r = 0; r < n; r++) {
        if (r % 2 == 0) {
            for (int c = 0; c < m; c++) {
                cout << '#';
            }
            cout << "\n";
        }else {
            if (right) {
                for (int c = 0; c < m - 1; c++) {
                    cout << ".";
                }
                
                cout << "#\n";
            } else {
                cout << '#';
                for (int c = 0; c < m - 1; c++) {
                    cout << ".";
                }
                cout << "\n";
            }
            right = !right;
        }
    }
}

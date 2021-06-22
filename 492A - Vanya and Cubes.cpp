
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int height = 1;
    int count = 0;
    while (count <= n) {
        
        int c = 0;
        for (int i = 1; i <= height; i++) {
            c += i;
        }
        
        if (count + c > n) {
            break;
        }
        count += c;
        height++;
        
    }
    cout << height - 1 << endl;
    
    return 0;
}

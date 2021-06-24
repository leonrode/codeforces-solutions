#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    
    int n;
    cin >> n;
    
    vector<int> cols;
    int c;
    while (cin >> c) cols.push_back(c);
    
    sort(cols.begin(), cols.end());
    
    for (int i = 0; i < cols.size(); i++) {
        cout << cols[i];
        if (i != cols.size() -1) {
            cout << " ";
        }
    }
    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int r, b;
    
    cin >> r >> b;
    
    int smaller = r <= b ? r : b;
    int bigger = r >= b ? r : b;
    
    cout << smaller << " " << (bigger - smaller) / 2 << endl;
}

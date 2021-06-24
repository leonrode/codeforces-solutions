#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n, m;

    cin >> n >> m;

    int smaller = n > m ? m : n;

    if (smaller % 2 == 0)
        cout << "Malvika" << endl;
    else
        cout << "Akshat" << endl;

    return 0;
}

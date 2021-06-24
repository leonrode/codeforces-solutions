#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n, m;

    cin >> n >> m;
    vector<int> p;
    int a;
    while (cin >> a)
        p.push_back(a);

    sort(p.begin(), p.end());

    int best = p[n - 1];
    for (int i = 0; i <= p.size() - n; i++) {
        if (p[i + n - 1] - p[i] < best)
            best = p[i + n - 1] - p[i];
    }
    cout << best;

    return 0;
}

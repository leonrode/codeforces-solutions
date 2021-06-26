
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ans(n);
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        ans[a - 1] = i;
    }
    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if (i != ans.size() - 1) cout << " ";
    }
    
    
}

#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main()
{
    int levels;
    cin >> levels;
        
    // p
    int p;
    vector<int> pvec;
    cin >> p;
    for (int i = 0; i < p; i++) {
         int n;
         cin >> n;
         pvec.push_back(n);
         
    }
    
    int q;
    vector<int> qvec;
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        int n;
        cin >> n;
        qvec.push_back(n);
    }
    
    bool ok = true;
    for (int i = 1; i <= levels; i++) {
        if (std::find(qvec.begin(), qvec.end(), i) == qvec.end() && std::find(pvec.begin(), pvec.end(), i) == pvec.end()) {
            ok = false;
        }
    }
    
    if (ok) {
        cout << "I become the guy.";
    }  else {
        cout << "Oh, my keyboard!";
    }
    
 

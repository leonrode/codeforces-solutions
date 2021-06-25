#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{

    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    unordered_map<string, int> counts;
    
    for (int i = 0; i < n - 1; i++) {
        
        string substring = s.substr(i, 2);
        if (counts.count(substring) == 0) {
            counts.insert({substring, 1});
        } else {
            counts[substring]++;
        }
    }
    
    string best;
    int max = 0;
    for (auto ent : counts) {
        if (ent.second > max) best = ent.first, max=ent.second;
    }
    cout << best;
    
    
}

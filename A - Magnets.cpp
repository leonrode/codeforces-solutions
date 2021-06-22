    #include <iostream>
    #include <vector>
    using namespace std;
     
    int main() {
     
      int n;
      cin >> n;
     
      string last;
      int ans = 1;
      for (int i = 0; i < n; i++) {
        string mag;
        cin >> mag;
        if (i == 0) last = mag;
     
        if (mag != last) {
          ans++;
        }
     
        last = mag;
      }
     
      cout << ans << endl;
    }

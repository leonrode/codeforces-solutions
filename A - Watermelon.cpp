    #include <iostream>
    using namespace std;
     
    int main() {
      int w;
      cin >> w;
      bool ok = false;
      for (int i = 1; i < w; i++) {
        if (i % 2 == 0 && (w - i) % 2 == 0) {
          ok = true;
        }
      }
      if (ok) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }

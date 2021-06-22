    #include <iostream>
     
    using namespace std;
     
    int main() {
      int n;
      int s = 0;
      cin >> n;
     
      for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        s += p;
      }
     
      cout << ((s / 100.0) /  n) * 100 << endl;
    }

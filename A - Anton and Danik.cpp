    #include <iostream>
    using namespace std;
     
    int main() {
      int n;
      string g;
     
      cin >> n >> g;
     
      int a = 0;
      int d = 0;
     
      for (int i = 0; i < n; i++) {
        if (g[i] == 'A') a++;
        else d++;
      }
     
      if (a == d) cout << "Friendship" << endl;
      else if (a > d) cout << "Anton"<< endl;
      else if (d > a) cout << "Danik"<< endl;
    }

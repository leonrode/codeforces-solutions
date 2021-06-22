    #include <iostream>
     
    using namespace std;
     
    int main() {
      int n;
       cin >> n;
       string o;
     
      for (int i = 1; i <= n; i++) {
     
          o += "I ";
          if (i % 2 == 1) {
            // hate
            o += "hate ";
          } else {
            o += "love ";
          }
      
        if (i != n) o += "that ";
      }
      o += "it";
      cout << o << endl;
    }

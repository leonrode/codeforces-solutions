    #include <iostream>
    using namespace std;
     
    int main() {
      string s;
      cin >> s;
     
      bool isCaps = true;
      for (int i = 1; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
          isCaps = false;
          break;
        }
      }
     
      if (isCaps) {
        for (int i = 0; i < s.length(); i++) {
          if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - ('a' - 'A');
          } else {
            s[i] = s[i] + ('a' - 'A');
          }
        }
      }
      cout << s << endl;
    }

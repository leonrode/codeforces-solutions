    #include <iostream>
    using namespace std;
     
    int main() {
      string s1;
      string s2;
      cin >> s1 >> s2;
     
      string o;
      for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) o+= '1';
        else o+='0';
      }
      cout << o << endl;
    }

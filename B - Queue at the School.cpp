

    #include <iostream>
     
    using namespace std;
     
    int main()
    {
      int n, t;
      cin >> n >> t;
      string s;
      cin >> s;
     
      string o;
      string temp = s;
      for (int time = 0; time < t; time++)
      {
     
        for (int i = 0; i < n; i++)
        {
          if (s[i] == 'B' && s[i + 1] == 'G')
          {
            temp[i] = 'G';
            temp[i + 1] = 'B';
          }
        }
     
        s = temp;
      }
      cout << s << endl;
    }

    #include <iostream>
    #include <algorithm>
    using namespace std;
     
    int main()
    {
      string text;
      cin >> text;
      const char vowels[12] = {'A', 'E', 'I', 'O', 'U', 'Y', 'a', 'e', 'i', 'o', 'u', 'y'};
     
      string output;
      for (int i = 0; i < text.length(); i++)
      {
        if (find(begin(vowels), end(vowels), text[i]) == end(vowels))
        {
          output += ".";
          if (text[i] >= 'A' && text[i] <= 'Z')
          {
     
            output += text[i] + 32;
          }
          else
          {
            output += text[i];
          }
        }
      }
      cout << output << endl;
    }

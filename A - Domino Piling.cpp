    #include <iostream>
    #include <math.h>
    
    using namespace std;
    
    int main()
    {
      int w, h;
      cin >> w >> h;
      int area = w * h;
     
      int filling = floor((double)area / 2);
      cout << filling << endl;
    }

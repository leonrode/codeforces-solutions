#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string top = "qwertyuiop";
    string mid = "asdfghjkl;";
    string bottom = "zxcvbnm,./";

    string d;
    string in;

    cin >> d >> in;

    string o;
    for (int i = 0; i < in.length(); i++) {
        if (mid.find(in[i]) != string::npos) {
            int ind = mid.find(in[i]);
            o += (d == "L" ? mid[ind + 1] : mid[ind - 1]);
        }
        else if (top.find(in[i]) != string::npos) {
            int ind = top.find(in[i]);
            o += (d == "L" ? top[ind + 1] : top[ind - 1]);
        }
        else if (bottom.find(in[i]) != string::npos) {
            int ind = bottom.find(in[i]);
            o += (d == "L" ? bottom[ind + 1] : bottom[ind - 1]);
        }
    }
    cout << o;
}


#include <iostream>
using namespace std;

int main()
{
    int n;
    int a=  0;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s == "Icosahedron") {
            a += 20;
        } else if (s == "Cube") {
            a += 6;
        } else if (s == "Dodecahedron") {
            a += 12;
        } else if (s == "Tetrahedron") {
            a += 4;
        } else if (s == "Octahedron") {
            a+= 8;
        }
    }
    
    cout << a;

    return 0;
}

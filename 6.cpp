#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned short int x, y;
    int z;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    if (y == 0)
    {
     z = -1;
    }
    else
    {
        z = x / y;
    }
   cout << "z: " << z;     
return 0;
}
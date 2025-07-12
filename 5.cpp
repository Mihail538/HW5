#include <iostream>
using namespace std;
int main()
{
    unsigned short int x, y, z;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    if (y==0)
    {
        cout << "z= -1";
    }
    z = x/y;
    cout << "z= " << z;
            return 0;
}
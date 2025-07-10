#include <iostream>
#include <cmath>
using namespace std;
int main (){
    unsigned long int Long, Width, p;
    cout << "Long: ";
    cin >> Long;
    cout << "Width: ";
    cin >> Width;
    p = (Long+Width)*2;
    cout << "Perimeter: " << p << endl;
    return 0;
}
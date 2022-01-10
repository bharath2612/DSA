#include <iostream>
using namespace std;
int main()
{1
    int x,y,z,big;
    cout << "Enter three numbers \n";
    cin >>x>>y>>z;
    big=x;
    if (y>big)
    {
        big=y;
    }
    if (z>big)
    {
        big=z;
    }
    cout << "Largest number is " << big;
}
#include <iostream>
using namespace std;
int main()
{
    int no,i=1,fact=1;
    cout << "Enter a positive no \n";
    cin >> no;
    while (i <= no)
    {
        fact *= i;
        ++i;
    }
    cout << "factorial of " << no << "=" << fact << "\n";
}
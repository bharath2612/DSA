#include <iostream>
using namespace std;

int digitalRoot(int n)
{
    if (n < 10)
    {
        return n;
    }

    n = n % 10 + digitalRoot(n / 10);

    return n < 10 ? n : digitalRoot(n);
}
int main()
{
    int n = 99999;
    cout << digitalRoot(n) << endl;
}
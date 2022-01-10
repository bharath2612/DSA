#include <iostream>
using namespace std;
int counter = 2;
bool isLucky(int n)
{

    if (counter > n)
        return 1;
    if (n % counter == 0)
        return 0;

    n = n - (n / counter);

    counter++;
    return isLucky(n);
}
int main()
{
    int n = 13;
    cout << isLucky(n) << endl;
}
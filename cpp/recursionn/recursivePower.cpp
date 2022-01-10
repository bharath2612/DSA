#include <iostream>
using namespace std;

int RecursivePower(int n, int p)
{
    //Your code here
    if (p == 0)
    {
        return 1;
    }
    return n * RecursivePower(n, p - 1);
}
int main()
{
    int n = 9;
    int p = 9;
    cout << RecursivePower(n, p) << endl;
}
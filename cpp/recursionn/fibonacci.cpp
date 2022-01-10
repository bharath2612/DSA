#include <iostream>
using namespace std;

int fibonacci(int n)
{
    //Your code here
    if (n == 0)
    {
        return 0;
    }
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}
int main()
{
    int n = 13;
    cout << fibonacci(n) << endl;
}
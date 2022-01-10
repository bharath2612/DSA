#include <iostream>
using namespace std;
int main()
{
    int n, i, j, sum = 0;
    cout << "Enter the number of lines you want to print \n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            sum += i;
            cout << sum;
        }
        cout << endl;
        sum = 0;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k;
    cout << "Enter the number of lines you want to print \n";
    cin >> n;
    for (i = 1, k = 0; i <= n; i++, k = 0)
    {
        for (j = 1; j <= n - 1; j++)
        {
            cout << " ";
        }
        while (k != 2 * i - 1)
        {
            cout << "* ";
            k++;
        }
        cout << endl;
    }
    return 0;
}
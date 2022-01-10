#include <iostream>
using namespace std;
int main()
{
    int n, i, j, num = 1;
    cout << "Enter the number of lines you want to print \n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
    return 0;
}
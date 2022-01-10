#include <iostream>
using namespace std;
int main()
{

    char input, alphabet = 'A';
    int n, i, j;
    cout << "Enter the number of lines you want to print \n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << alphabet;
        }
        alphabet++;
        cout << endl;
    }
    return 0;
}
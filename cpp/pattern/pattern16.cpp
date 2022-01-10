#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of lines you want to print \n";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space -= 1;
        }
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col += 1;
        }
        int col2 = row - 1;
        while (col2)
        {
            cout << col2;
            col2 -= 1;
        }
        cout << endl;
        row += 1;
    }
}
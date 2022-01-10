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
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col;
            col += 1;
        }
        int star = row - 1;
        while (star)
        {
            cout << "*";
            star -= 1;
        }
        int star2 = row - 1;
        while (star2)
        {
            cout << "*";
            star2 -= 1;
        }
        int col2 = n - row + 1;
        while (col2)
        {
            cout << col2;
            col2 -= 1;
        }
        cout << endl;
        row += 1;
    }
}
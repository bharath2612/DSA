#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of lines you want to print \n";
    cin >> n;
    int row = 1;
    int count = 0;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch = 'A' + count;
            cout << ch << " ";
            count++;
            col += 1;
        }
        cout << endl;
        row += 1;
    }
}

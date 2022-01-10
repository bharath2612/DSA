#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of lines you want to print \n";
    cin >> n;
    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count << " ";
            count++;
            col += 1;
        }
        cout << endl;
        row += 1;
    }
}

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
        while (col <= row)
        {
            cout << col + row - 1 << " "; //can also use count and set count to row at every end of line./
            col += 1;
        }
        cout << endl;
        row += 1;
    }
}

//O/P
//1
//2 3
//3 4 5
//4 5 6 7

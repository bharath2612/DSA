#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter any negative number\n";
    cin >> n;
    int temp = n;
    n = abs(n);

    n = ~n + 1; // found out the 2's complement of n to get the negative number

    cout << "The binary representation of " << temp << " is  : ";

    /*  now whatever bits are there in the -ve number right , i am extracting them one by one from left to right */
    for (int i = 31; i >= 0; --i)
    {
        long long int x = (int)(pow(2, i));
        cout << (n & x) / x;
    }

    cout << endl;
}

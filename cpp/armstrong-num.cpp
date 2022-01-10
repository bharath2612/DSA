#include <iostream>
using namespace std;
int main()
{
    int og,no,rem,sum=0,digit;
    cout<< "Enter a number \n";
    cin >> og;
    no=og;
    while (no != 0)
    {
        digit=no%10;
        sum += digit*digit*digit;
        no /= 10;
    }
    if (sum == og)
    {
        cout<<og<<" is an armstrong number";
    }
    else
    {
        cout<<og<<" is not an armstrong number";
    }
    return 0;
}
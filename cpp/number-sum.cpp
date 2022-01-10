#include <iostream>
using namespace std;
int main()
{
    int sum=0,n,i;
    cout << "How many natural numbers? \n";
    cin >> n;
    cout << "\n Natural numbers are \n";
    for (i=1;i<=n;i++)
    {
        cout<<i<<" ";
        sum+=i;
    }
    cout<< "\n SUM: " << sum;
    return 0;
}

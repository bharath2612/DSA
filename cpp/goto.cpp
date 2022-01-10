#include <iostream>
using namespace std;
int main()
{
    float no,avg,sum = 0.0;
    int i,n;
    cout << "Maximum number of inputs: ";
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cout << "Enter number" << i << ": ";
        cin >> no;
        if (no < 0.0)
        {
        goto jump;
        }
        sum+=no;
    }
    jump:
    avg=sum/(i-1);
    cout << "\n Average = " << avg;
    return 0;
}


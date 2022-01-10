#include <iostream>
using namespace std;
int main()
{
    char grade='A';
    int y=200;
    switch(grade)
    {
        case 'A':
        cout << "Excellent \n";
        switch(y)
        {
            case 100:
            cout << "just trying out the nested switch case \n";
            break;
            case 200:
            cout << "this should  be printed! \n";
        }
        break;
        case 'B':
        cout << "Well Done! \n";
        break;
        case 'C':
        cout << "GOOD JOB xDD \n";
        break;
        default :
        cout << "invalid AF \n";
    }
    cout << "your greade is " << grade << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int i;
    float x=10.45;
    double y;
    y=x;           //implicit conversion
    cout<<"Value of y is :"<<y<<endl;;
    i=(int)x;      //Explicit typecasting
    cout<<"value of i is :"<<i<<endl;
    return 0;
}

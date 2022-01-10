#include <iostream>
#include <string>
using namespace std;
class Example
{
    int a=20;
    char name[10]="bharath";
    public:
    Example()
    {
            cout<<"This is the example for the constructor: "<<endl;
            cout<<"my name is "<<name<<endl;
            cout<<"My age is "<<a<<endl; 
    }
};
int main()
{
     Example e;
    return 0;
}

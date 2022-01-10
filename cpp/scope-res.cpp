#include <iostream>
using namespace std;
class ex
{
    int a,b;
    public:
        void getdata();
        void putdata();
};
void ex::getdata()
{
    cout<<"Enter 2 numbers";
    cin>>a>>b;
}
void ex::putdata()
{
    cout<<"\na="<<a<<endl;
    cout<<"b="<<b;
}
int main()
{
ex a;
a.getdata();
a.putdata();
return 0;
}

#include <iostream>
#include <string>
using namespace std;
class Office
{
    static char name[10], designation[10];
    static int salary;
    public:
    static int msum,wsum,ssum;
    static void getdata()
    {
        cout<<"\n Enter name,designation and salary";
        cin>>name;
        cin>>designation;
        cin>>salary;
    }
    static void addsalary()
    {
        int x,y,z;
        x = strcmp(designation,"manager");
        if (x==0)
            msum+=salary;
        y = strcmp(designation,"supervisor");
            ssum+=salary;
        z = strcmp(designation,"worker");
             wsum+=salary;
    }
    static void showdata()
    {
        cout<<"\n"<<name<<designation<<salary;
    }
};
    int Office::msum;
    int Office::ssum;
    int Office::wsum;
int main()
{
    Office op[10];
    int n,i,temp;
    for (i=0;i<n;i++)
    {
        office[i]::getdata();
        Office[i]::addsalary();
    }
    cout<<"\n name designation salary";
    for (i=0;i<n;i++)
    {
        Office[i]::showdata();
    }
    cout<<"\n Total salary of all managers : "<<Office::msum;
    cout<<"\n Total salary of all supervisor : "<<Office::ssum;
    cout<<"\n Total salary of all workers : "<<Office::wsum<<endl;
    temp = Office::msum+Office::ssum+Office::wsum;
    cout<<"\n Total salary of all the employees in the company : "<<temp<<endl;
    return 0;
}
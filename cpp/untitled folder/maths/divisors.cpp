#include<iostream>
#include<limits.h>
using namespace std;
void unsorteddiv(int n)        //thetaO(sqrt(n))
{
    int i;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        
            if(i != (n/i))
                cout<<(n/i)<<" ";
        }
    }
}
void sorteddiv(int n)
{
    int i;
    cout<<endl;
    for (i=1;i*i<=n;i++)   //print all divisors from 1(incl) to rootn(exclu)
        if(n%i==0)
            cout<<i<<" ";
    for ( ;i>=1;i--)      //print all divisors from rootn(incl) to n(incl)
        if(n%i==0)
            cout<<(n/i)<<" ";
}
int main()
{
    int n=15;
    unsorteddiv(n);
    sorteddiv(n);
}
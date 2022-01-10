#include<iostream>
#include<math.h>
using namespace std;
bool prime(int n)     //efficient code with O(n)
{
    if (n == 1)
        return false;
    
        for (int i=2;i<n;i++)
            if(n%i==0)
                return false;
    return true;
}
bool primeb(int n)      //more efficient code with O(sqrt(n))
{
    if (n == 1)
        return false;
    
        for (int i=2;i*i<=n;i++)
            if(n%i==0)
                return false;
    return true;
}
bool primec(int n)        //best code with 1/3 the speed of the efficient code o(sqrt(n))
{
    if (n == 1)
        return false;

    if (n == 2 || n ==3)
        return true;

    if (n%2 == 0 || n%3 == 0)
        return false;
    
        for (int i=2;i*i<=n;i=i+6)
            if(n%i==0 || n%i+2==0)
                return false;
    return true;
}
int main()
{
    int n,res1,res2,res3;
    cin>>n;
    prime(n);
    primeb(n);
    primec(n);
    res1 = prime(n);
    res2 = primeb(n);
    res3 = primec(n);
    cout<<res1<<res2<<res3;
}

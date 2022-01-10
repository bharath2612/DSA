#include <iostream>
using namespace std;
void printacc(int n)
{
   if (n == 1)
   {
       cout<<n<<" ";
       return;
   }
   printacc(n-1);
   cout<<n<<" ";
}
void printdes(int n)
{
   if (n == 1)
   {
       cout<<n<<" ";
       return;
   }
   cout<<n<<" ";
   printdes(n-1);
}
int factorial(int n)
{
    if (n == 1)
   {
       return 1;
   }
   return n*factorial(n-1); 
}
int path(int m,int n)
{
    if (m == 1 || n == 1)
    {
        return 1;
    }
    return path(m-1,n)+path(m,n-1);
}
int main()
{
    int m = 4,n,arr[n];
    cout<<"Enter n ";
    cin>>n;
    printacc(n);
    cout<<endl;
    printdes(n);
    cout<<endl;
    factorial(n);
    int res = factorial(n);
    cout<<res<<endl;
    path(m,n);
    int result = path(m,n);
    cout<<result<<endl;
}
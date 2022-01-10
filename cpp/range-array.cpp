#include <iostream>
using namespace std;
int main()
{
    int temp,l,i,j;
    int *p;
    cout<<"enter the size of an array: ";
    cin>>l;
    p = new int [l];
    cout<<"Enter the elements of the array:";
    for (i=0;i<l;i++)
    {
        cin>>temp;
        p[i] = temp;
    }
    int k=0;
    for (j=k+1;j<l;j++)
    {
        if (p[k] < p[j])
        {
            p[k] = p[j];
        }
    }
    cout<<p[k]<<endl;
    int x = p[k];
    i=0,j=0;
    for (j=i+1;j<l;j++)
    {
        if (p[i] > p[j])
        {
            p[i] = p[j];
        }
    }
    cout<<p[i]<<endl;
    int y=p[i];
    cout<<"\n"<<x<<endl<<y;
    int range = x-y;
    cout<<range<<endl;
    return 0;
}
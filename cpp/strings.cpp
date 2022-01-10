#include <iostream>
using namespace std;
int main()
{
    char team[]="MUMBAI INDIANS";
    float score[11]={40, 50, 20, 42, 43, 64, 32, 5, 10, 0, 0};
    float avg=0;
    for (int i=1;i<11;i++)
    {
        avg+=score[i];
    }
    avg/=dde11;
    cout<<"Average is "<<avg;
    return 0;
}
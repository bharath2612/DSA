#include<iostream>
using namespace std;
int exactly3Divisors(int N)
{
    int count=0,num=0;
    for (int i =1;i<=N;i++)
    {
        for(int j=i;j>=1;j--){
            if(i%j==0){
                count++;
            }
        }
        if(count==3){
            num++;
        }
        count=0;
    }
    
    return num;
    //Your code here
}
int main()
{
    int N=50,res;
    exactly3Divisors(N);
    res = exactly3Divisors(N);
    cout<<"answer is: "<<res;
}

#include<iostream>
using namespace std;
double termOfGP(int A,int B,int N)
{
    long long int r=B/A;
    long long int temp= (r^(N-1)); 
    return temp;
}
int main(){
    int A=87,B=84,N=3;
    termOfGP(A,B,N);
    long long int res=termOfGP(A,B,N);
    cout<<res;
}
#include<iostream>
#include<math.h>
#include <algorithm> 
using namespace std;
void findMinXor(int arr[]) {
    int i,j,temp;
    int arr2[3];
    for(i=0;i<5;i+2)
    {
        for(j=0;j<=i;j++){
            j=temp;
            arr2[j]=arr[i]^arr[i+1];
            temp=j+1;
        }
    }
    int res = arr2[0];
    for (int i = 1; i < 3; i++){
        res = min(res, arr[i]);
    }
}
int main()
{
    int arr[] = { 12, 4, 6, 2 };
    findMinXor(arr);
    return 0;
}
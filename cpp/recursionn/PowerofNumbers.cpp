#include <iostream>
#include <math.h>
using namespace std;

long long p = pow(10, 9) + 7;
long long neg(int N, int R)
{
    if (R == 0)
        return 1;
    else if (R % 2 == 0)
    {
        long long t = neg(N, R / 2) % p;
        return (t * t) % p;
    }
    else
        return ((N) % p * (neg(N, R - 1)) % p) % p;
}
long long power(int N, int R)
{
    if (abs(neg(N, R)) < R)
    {
        return (neg(N, R) + R) % R;
    }
    return neg(N, R);
}

long long rev(long long n)
{
    long long rev_num = 0;
    while (n > 0)
    {
        rev_num = rev_num * 10 + n % 10;
        n = n / 10;
    }
    return rev_num;
}
int main()
{
    long long N = 12;
    long long R = 0;
    R = rev(N);
    long long ans = power(N, R);
    cout << ans << endl;
}

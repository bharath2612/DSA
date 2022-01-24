#include <iostream>
using namespace std;

// O(n) implementation
int trappingRain(int height[], int size)
{
    int res = 0;
    int lmax[size], rmax[size];
    lmax[0] = height[0];
    for (int i = 1; i < size; i++)
    {
        lmax[i] = max(height[i], lmax[i - 1]);
    }
    rmax[size - 1] = height[size - 1];
    for (int i = size - 2; i >= 0; i--)
    {
        rmax[i] = max(height[i], rmax[i + 1]);
    }
    for (int i = 0; i < size; i++)
    {
        res = res + (min(lmax[i], rmax[i]) - height[i]);
    }
    return res;
}

int main()
{
    int height[] = {3, 0, 1, 2, 3, 4, 0, 5};
    cout
        << "maximum trapping section is " << trappingRain(height, 8)
        << endl;
    return 0;
}
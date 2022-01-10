#include<iostream>
#include<vector>
using namespace std;
int sort(vector<int>&v)
{
    if (v.size() == 1)
    {
        return 1;
    }
    int temp = v.size()-1;
    v.pop_back();
    sort(v);
}
int insert(vector<int>&v,int temp)
{
    if (v.size() == 0 || v[v.size()-1]<=temp)
    {
        v.push_back(temp);
        return 1;
    }
    int val = v.size()-1;
    v.pop_back();
    insert(v,temp);
    v.push_back(val);
}
int main()
{
    int temp,val;
    vector<int> v = {3,4,1,5};
    sort(v);
    insert(v,temp);
    int res = insert(v,temp);
    cout<<res;
    return 0;
}
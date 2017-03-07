#include <iostream>

using namespace std;

int main()
{
    long int n,m,res;
    cin>>n>>m;
    if(m == 1)
        res = ++m;
    else
        res = --m;
    cout<<res<<endl;
    return 0;
}

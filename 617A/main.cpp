#include <iostream>

using namespace std;

int main()
{
    int n,res;
    cin>>n;
    if(n%5==0)
    {
        res = n/5;
    }
    else
        res=(n/5)+1;
    cout<<res<<endl;
    return 0;
}

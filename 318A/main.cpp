#include <iostream>

using namespace std;

int main()
{
    long long int k,n,div,res;
    cin>>n>>k;
    if(n%2!=0)
        div = (n+1)/2;
    else
        div = n/2;
    if(k<=div)
        res = 2*k-1;
    else
        res = 2*(k-div);
    cout<<res<<endl;
    return 0;
}

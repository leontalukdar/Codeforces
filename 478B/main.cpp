#include <iostream>

using namespace std;

long long sum(long long);

int main()
{
    long long n,m,kmax,kmin=0,temp;
    cin>>n>>m;
    temp = n-m;
    kmax = sum(temp);
    long long div,mod;
    mod = n%m;
    div = n/m;
    kmin = mod * sum(div) + (m-mod)*sum(div-1);
    cout<<kmin<<" "<<kmax<<endl;
    return 0;
}

long long sum(long long x)
{
    return(x*(x+1))/2;
}

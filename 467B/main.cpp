#include<iostream>

using namespace std;

int main()
{
    int n,m,k,i,ar[10005],s=0;
    cin>>n>>m>>k;
    for(i=0; i<m+1; i++)
        cin>>ar[i];
    for(i=0; i<m; i++)
    {
        if(__builtin_popcount(ar[i]^ar[m])<=k)
            s++;
    }

    cout<<s<<endl;
    return 0;
}

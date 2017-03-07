#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int n,m,i;
    cin>>n>>m;
    for(i=1;;i++)
    {
        int a=i/2;
        int b=i/3;
        int c=i/6;
        if(a>=n && b>=m && a+b-c>=n+m)
            break;
    }
    cout<<i<<endl;
    return 0;
}

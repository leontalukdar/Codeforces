#include <iostream>

using namespace std;

int main()
{
    int p,q,l,r,a[1001],b[1001],c[1001],d[1001],x=0;
    cin>>p>>q>>l>>r;
    for(int i=0;i<p;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<q;i++)
    {
        cin>>c[i]>>d[i];
    }
    for(int u=l;u<=r;u++)
    {
        for(int i=0,g=0;i<p&&!g;i++)
        {
            for(int j=0;j<q&&!g;j++)
            {
                if(a[i]<=d[j]+u&&b[i]>=c[j]+u)
                {
                    g=++x;
                }
            }
        }
    }
    cout<<x<<endl;
    return 0;
}

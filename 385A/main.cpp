#include <iostream>

using namespace std;

int main()
{
    int n,c,x[102],bmax=0;
    cin>>n>>c;
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(x[i]>x[i+1])
        {
            int tmax=x[i]-x[i+1]-c;
            if(tmax>bmax)
                bmax=tmax;
        }

    }
    cout<<bmax<<endl;
    return 0;
}

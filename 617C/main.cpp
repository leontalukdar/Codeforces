#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    long long int x1,y1,x2,y2,disl,dish,n,ar[2001][2],lx,ly,hx,hy;
    cin>>n>>x1>>y1>>x2>>y2;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
            cin>>ar[i][j];
    }
    int templ,temph;
    templ = abs(ar[0][0]-0)+abs(ar[0][1]-0);
    temph = abs(ar[0][0]-0)+abs(ar[0][1]-0);
    for(int i=0;i<n-1;i++)
    {
        lx=ar[i][0];
        ly=ar[i][1];
        hx=lx;
        hy=ly;
        if(templ>abs(ar[i+1][0]-0)+abs(ar[i+1][1]-0))
        {
            lx=ar[i+1][0];
            ly=ar[i+1][1];
            templ = abs(ar[i+1][0]-0)+abs(ar[i+1][1]-0);
        }
        if(temph<abs(ar[i+1][0]-0)+abs(ar[i+1][1]-0))
        {
            hx=ar[i+1][0];
            hy=ar[i+1][1];
            temph = abs(ar[i+1][0]-0)+abs(ar[i+1][1]-0);
        }
    }

    disl=abs((lx-x1)*(lx-x1))+abs((ly-y1)*(ly-y1));
    dish=abs((hx-x2)*(hx-x2))+abs((hy-y2)*(hy-y2));

    cout<<disl+dish<<endl;
    return 0;
}

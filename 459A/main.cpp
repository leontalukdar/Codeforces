#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int x1,x2,y1,y2,X,Y,nx1,nx2,ny1,ny2;
    cin>>x1>>y1>>x2>>y2;
    X = abs(x2-x1);
    Y = abs(y2-y1);
    if((X==0 && Y==0)||(X!=0 && Y!=0 && X!=Y))
        cout<<-1<<endl;
    else
    {
        if(X==0)
        {
            nx1 = x1+Y;
            ny1 = y1;
            nx2 = x2 + Y;
            ny2 = y2;
        }
        else if(Y==0)
        {
            nx1 = x1;
            ny1 = y1+X;
            nx2 = x2;
            ny2 = y2+X;
        }
        else
        {
            nx1 = x1;
            ny1 = y2;
            nx2 = x2;
            ny2 = y1;
        }
        cout<<nx1<<" "<<ny1<<" "<<nx2<<" "<<ny2<<endl;
    }
    return 0;
}

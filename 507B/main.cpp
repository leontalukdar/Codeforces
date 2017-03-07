#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main()
{
    double r,x1,y1,x2,y2,res;
    cin>>r>>x1>>y1>>x2>>y2;
    res = ceil(sqrt(abs(x1-x2)*abs(x1-x2)+abs(y1-y2)*abs(y1-y2))/(2*r));
    cout<<res<<endl;
    return 0;
}

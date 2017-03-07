#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long int x1,y1,x2,y2,dif1,dif2;
    cin>>x1>>y1>>x2>>y2;
    dif1 = x1-x2;
    dif2 = y1-y2;
    if(dif1<0)
        dif1 *= -1;
    if(dif2<0)
        dif2 *= -1;
    cout<<max(dif1,dif2)<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n,x,y,modulo=1e9+7;
    cin>>x>>y>>n;
    int res[]={x-y,x,y,y-x,-x,-y};
    cout<<((res[n%6]%modulo)+modulo)%modulo<<endl;
    return 0;
}

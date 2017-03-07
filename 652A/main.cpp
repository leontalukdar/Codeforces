#include <iostream>

using namespace std;

int main()
{
    int h1,h2,a,b;
    cin>>h1>>h2>>a>>b;
    if(h1+a*8>=h2)
    {
        cout<<0<<endl;
        return 0;
    }
    if(a<b)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(h1+a*8<h2 && a==b)
    {
        cout<<-1<<endl;
        return 0;
    }
    int res=1;
    h1+=a*8-b*12;
    while(1)
    {
        h1+=a*12;
        if(h1>=h2)
            break;
        res++;
        h1-=b*12;
    }
    cout<<res<<endl;
    return 0;
}

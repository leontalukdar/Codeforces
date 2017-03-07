#include <iostream>

using namespace std;

int main()
{
    int a,b,c,res = 0;
    cin>>a>>b>>c;
    if((a==1 && b==1 && c==1) || (a==1 && c==1))
        res = a+b+c;
    else if(a==1)
    {
        res = (a+b)*c;
    }
    else if(b==1)
    {
        if(a>=c)
           res = a*(b+c);
        else
            res = (a+b)*c;
    }
    else if(c==1)
        res = a*(b+c);
    else
        res = a*b*c;
    cout<<res<<endl;
    return 0;
}

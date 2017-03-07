#include <iostream>

using namespace std;

int main()
{
    int n,x,ec=0,oc=0,indexe,indexo;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
        {
            ec++;
            indexe = i;
        }
        else
        {
            oc++;
            indexo = i;
        }
    }
    if(ec == 1)
        cout<<indexe<<endl;
    else
        cout<<indexo<<endl;
    return 0;
}

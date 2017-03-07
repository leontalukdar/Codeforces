#include <iostream>

using namespace std;

int main()
{
    int ar[100001],n,s,t;
    cin>>n>>s>>t;
    for(int i=1;i<=n;i++)
        cin>>ar[i];
    if(s==t)
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        s=ar[s];
        if(s==t)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a[30],b[30],i,j,n,Count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
                Count++;
        }
    }
    cout<<Count<<endl;
    return 0;
}

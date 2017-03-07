#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,ar[1005],res[1005];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(int i=0,j=0;i<n/2;i++)
    {
        res[j]=ar[i];
        j++;
        res[j]=ar[n-i-1];
        j++;
    }
    if(n%2!=0)
        res[n-1]=ar[n/2];
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
            if(res[i]>res[i-1])
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
        }
        if(i%2!=0)
        {
            if(res[i]<res[i-1])
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<res[i]<<" ";
    cout<<endl;
    return 0;
}

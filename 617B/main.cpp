#include <iostream>

using namespace std;

int main()
{
    long long int n,ar[101],count0=1,tcount=1,temp=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        if(ar[i]==1)
            temp++;
    }
    if(temp==0)
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {

        while(ar[i]!=1)
            i++;
        if(ar[i]==1)
        {
            while(ar[i]==1)
                i++;
            count0=1;
            while(ar[i]!=1 && i<n)
            {
                count0++;
                i++;
            }
        }
        if(i==n)
            break;
        else
        {
            i--;
            tcount*=count0;
        }
    }
    cout<<tcount<<endl;
    return 0;
}

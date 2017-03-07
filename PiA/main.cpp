#include <iostream>

using namespace std;

int main()
{
    long int ar[100001],disp,disn,displ,disnl,maxdis,mindis,n,last;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    last = maxdis = ar[n-1] - ar[0];
    mindis = ar[1] - ar[0];
    cout<<mindis<<" "<<maxdis<<endl;
    maxdis = mindis = 0;
    for(int i=1;i<n-1;i++)
    {
        displ = ar[i] - ar[0];
        disnl = ar[n-1] - ar[i];
        if(displ>disnl)
            maxdis = displ;
        else
            maxdis = disnl;
        disp = ar[i] - ar[i-1];
        disn = ar[i+1] - ar[i];
        if(disp<disn)
            mindis = disp;
        else
            mindis = disn;
        cout<<mindis<<" "<<maxdis<<endl;
    }
    maxdis = last;
    mindis = ar[n-1] - ar[n-2];
    cout<<mindis<<" "<<maxdis<<endl;
    return 0;
}

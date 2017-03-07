#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    long long sum=0,ar[100001],n,temp=0,flag=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(int i=0;i<n;i++)
    {
        if(flag==0&&ar[i]%2!=0)
        {
            temp=ar[i];
            flag=1;
        }
        sum+=ar[i];
    }
    if(sum%2!=0)
        cout<<sum-temp<<endl;
    else
        cout<<sum<<endl;
    return 0;
}

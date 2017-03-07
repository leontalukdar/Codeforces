#include <iostream>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

#define ll long long int

using namespace std;

int main()
{
    int n,k,ar[101],maxi=0,mini=101;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]>maxi)
            maxi=ar[i];
        if(ar[i]<mini)
            mini=ar[i];
    }
    if(maxi-mini>k)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<ar[i];j++)
                cout<<(j%k)+1<<" ";
            cout<<endl;
        }
    }
    return 0;
}

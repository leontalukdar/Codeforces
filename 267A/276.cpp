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
    int n,k,f,t,maxi=-1e9,temp;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>f>>t;
        if(t>k)
            temp=f-(t-k);
        else
            temp=f;
        if(temp>maxi)
            maxi=temp;
    }
    cout<<maxi<<endl;
    return 0;
}

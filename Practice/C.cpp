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
    ll n,res=0;
    cin>>n;
    while(n)
    {
        res+=pow(2,n);
        n--;
    }
    cout<<res<<endl;
    return 0;
}

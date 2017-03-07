#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    long long n,a,b,c,countf=0,res,tres=0,div;
    cin>>n>>a>>b>>c;
    tres=(n/a);
    countf=n-b+c;
    res=max(countf/a,countf/b);
    cout<<max(res+1,tres)<<endl;
    return 0;
}

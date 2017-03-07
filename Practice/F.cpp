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
    ll result=0,n;
    cin>>n;
    result=n*(n-1)*(n-2)*(n-3)*(n-4)/120;
    cout<<result+result*(n-5)/6+result*(n-5)/6*(n-6)/7<<endl;
    return 0;
}

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
    double a,b,c;
    cin>>a>>b>>c;
    double x=(-b+sqrt(abs(b*b-4.0*a*c)))/(2.00*a);
    double y=(-b-sqrt(abs(b*b-4.0*a*c)))/(2.00*a);
    if(x<y)
        swap(x,y);
    printf("%.17lf\n",x);
    printf("%.17lf\n",y);
    return 0;
}

#include <iostream>
#include <math.h>
#include <sstream>
#include <string.h>
#include <iomanip>

using namespace std;

int main()
{
    double d,l,v1,v2;
    cin>>d>>l>>v1>>v2;
    cout<<fixed<<setprecision(6)<<((l-d)/(v1+v2))<<endl;
    return 0;
}

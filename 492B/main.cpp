#include <iostream>
#include <iomanip>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    long long ar[1100],ar1[1100],Max = 0;
    long long l,n,i;
    cin>>n>>l;
    for(i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n);
    ar1[0] = 2.0*ar[0];
    ar1[n] = 2.0*(l-ar[n-1]);
    for(i=1;i<n;i++)
    {
        ar1[i] = ar[i]-ar[i-1];
    }
    Max = *max_element(ar1,ar1+n+1);
    cout<<setprecision(11)<<(double)Max/2.0<<endl;
    return 0;
}

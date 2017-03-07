#include <iostream>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <queue>
#include <cstring>
#include <ctype.h>

#define ll long long int
#define pii pair<int,int>
#define PI acos(-1.0)

using namespace std;

//Normal Gcd
/*int gcd ( int a, int b )
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}*/

//Recursive Gcd
/*int gcdr ( int a, int b )
{
  if ( a==0 ) return b;
  return gcdr ( b%a, a );
}*/

//int fx[]={0,0,1,-1};
//int fy[]={1,-1,0,0};
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

int main()
{
    int n;
    cin>>n;
    double ar[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    sort(ar+1,ar+n+1);
    double red=0.0;
    if(n%2==0)
    {
        for(int i=2;i<=n;i+=2)
        {
            red+=PI*abs(ar[i]*ar[i]-ar[i-1]*ar[i-1]);
        }
    }
    else
    {
        red=PI*ar[1]*ar[1];
        for(int i=3;i<=n;i+=2)
        {
            red+=PI*abs(ar[i]*ar[i]-ar[i-1]*ar[i-1]);
        }
    }
    printf("%.17lf\n",red);
    return 0;
}




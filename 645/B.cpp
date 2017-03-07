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

//Normal Gcd
int gcd ( int a, int b )
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}

//Recursive Gcd
int gcdr ( int a, int b )
{
  if ( a==0 ) return b;
  return gcdr ( b%a, a );
}

int main()
{
    ll n,k,div,remain,res=0;
    cin>>n>>k;
    if(n/2<=k)
    {
        cout<<(n*(n-1))/2<<endl;
        return 0;
    }
    else
    {
        remain=n-2*k;
    }
    cout<<(n*(n-1))/2-(remain*(remain-1))/2;
    return 0;
}

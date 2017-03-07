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
ll gcd ( ll a, ll b )
{
  ll c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}

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
    ll l,r;
    cin>>l>>r;
    for(ll i=l;i<=r;i++)
    {
        for(ll j=i+1;j<=r;j++)
        {
            for(ll k=j+1;k<=r;k++)
            {
                if(gcd(i,j)==1 && gcd(j,k)==1 && gcd(i,k)!=1)
                {
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}




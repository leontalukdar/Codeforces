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
    int n,k;
    cin>>n>>k;
    int ar[n+1];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n);
    int res=0;
    for(int i=0;i<k;i++)
    {
        if(ar[i]>0)
            break;
        res+=ar[i];
    }
    if(res==0)
        cout<<0<<endl;
    else
        cout<<-res<<endl;
    return 0;
}




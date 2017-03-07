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

using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
#define pb push_back
#define mp make_pair
#define PI acos(-1.0)

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

//moduler arithmetic
/*ll bigmod(ll B,ll P,ll M)
{
    if(P==0)return 1;
    if(P%2==0)
    {
	ll ret=bigmod(B,P/2,M);
	return ((ret%M)*(ret%M))%M;
    }
    else
	return ((B%M)*(bigmod(B,P-1,M)%M))%M;
}*/

//int fx[]={0,0,1,-1};
//int fy[]={1,-1,0,0};
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

int main()
{
    string s;
    int n,k,ncount=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        int count4=count(s.begin(),s.end(),'4');
        int count7=count(s.begin(),s.end(),'7');
        if(count4+count7<=k)
            ncount++;
    }
    cout<<ncount<<endl;
    return 0;
}




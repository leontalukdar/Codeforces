#include <iostream>
#include <fstream>
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
#include <stack>
#include <cstring>
#include <ctype.h>

using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<string,int> psi;
typedef pair<int,string> pis;
typedef pair<string,string> pss;
#define reset(n) memset(n,-1,sizeof(n))
#define clr(n) memset(n,0,sizeof(n))
#define pb push_back
#define mp make_pair
#define PI acos(-1.0)
#define MAX 100005

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
//ll M
/*ll bigmod(ll B,ll P)
{
    if(P==0)return 1;
    if(P%2==0)
    {
	ll ret=(bigmod(B,P/2))%M;
	return ((ret%M)*(ret%M))%M;
    }
    else
	return ((B%M)*(bigmod(B,P-1)%M))%M;
}*/
/*count trailing zeroes
ll findLastZeros(ll  n)
{
    ll countzero = 0;
    for (ll i=5; n/i>=1; i *= 5)
          countzero += n/i;
    return countzero;
}
*/

//int fx[]={0,0,1,-1};
//int fy[]={1,-1,0,0};
//int fx[]={1,1,-1,-1};
//int fy[]={1,-1,1,-1};
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

bool check[100005];

int main()
{
    int n,k;
    ll ar[100005];
    ll cap[100005];
    ll total=0;
    ll beauty=0;
    ll discard=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        beauty+=ar[i];
        if(i>1)
            total+=(ar[i]*ar[i-1]);
    }
    total+=ar[1]*ar[n];
    for(int i=1;i<=k;i++)
    {
        int x;
        cin>>x;
        ll temp=beauty;
        discard+=ar[x];
        int z=x+1;
        if(z>n)
            z=1;
        if(!check[z])
            temp-=ar[z];
        z=x-1;
        if(z<1)
            z=n;
        if(!check[z])
            temp-=ar[z];
        temp-=discard;
        //cout<<temp<<endl;
        if(temp<0)
            temp=0;
        total+=temp*ar[x];
        check[x]=true;
    }
    cout<<total<<endl;
    return 0;
}




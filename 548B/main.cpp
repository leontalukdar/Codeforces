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
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

int main()
{
    vector<int>v;
    int n,m,q;
    cin>>n>>m>>q;
    int cnt;
    int ar[n+2][m+2];
    int maxi[n+2];
    memset(maxi,0,sizeof maxi);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cin>>ar[i][j];
    }
    for(int i=1;i<=n;i++)
    {
        cnt=0;
        for(int j=1;j<=m;j++)
        {
            if(ar[i][j])
                cnt++;
            else
            {
                maxi[i]=max(maxi[i],cnt);
                cnt=0;
            }
        }
        maxi[i]=max(maxi[i],cnt);
    }
    int a,b;
    for(int l=0;l<q;l++)
    {
        cin>>a>>b;
        if(ar[a][b])
            ar[a][b]=0;
        else
            ar[a][b]=1;
        int i;
        cnt=0;
        maxi[a]=0;
        for(int i=1;i<=m;i++)
        {
            if(ar[a][i])
                cnt++;
            else
            {
                maxi[a]=max(maxi[a],cnt);
                cnt=0;
            }
        }
        maxi[a]=max(maxi[a],cnt);
        int x=0;
        for(int d=1;d<=n;d++)
        {
            if(x<maxi[d])
                x=maxi[d];
        }
        v.pb(x);
    }
    for(int o=0;o<v.size();o++)
        cout<<v[o]<<endl;
    return 0;
}




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

int ar[105];
int n;
int dp[105][5];

int calculate(int i,int priv)
{
    if(i>=n)
        return 0;
    if(dp[i][priv]!=-1)
        return dp[i][priv];
    int rest1=INT_MAX,rest2=INT_MAX,rest3=INT_MAX;
    if(ar[i]==0)
    {
        rest3=1+calculate(i+1,0);
    }
    if(ar[i]==1)
    {
        if(priv==0||priv==2)
        {
            rest1=calculate(i+1,1);
            rest3=1+calculate(i+1,0);
        }
        if(priv==1)
        {
            rest3=1+calculate(i+1,0);
        }
    }
    if(ar[i]==2)
    {
        if(priv==0||priv==1)
        {
            rest2=calculate(i+1,2);
            rest3=1+calculate(i+1,0);
        }
        if(priv==2)
        {
            rest3=1+calculate(i+1,0);
        }
    }
    if(ar[i]==3)
    {
        if(priv==0)
        {
            rest1=calculate(i+1,1);
            rest2=calculate(i+1,2);
            rest3=1+calculate(i+1,0);
        }
        if(priv==1)
        {
            rest2=calculate(i+1,2);
            rest3=1+calculate(i+1,0);
        }
        if(priv==2)
        {
            rest1=calculate(i+1,1);
            rest3=1+calculate(i+1,0);
        }
    }
    dp[i][priv]=min(rest1,min(rest2,rest3));
    return dp[i][priv];
}

int main()
{
    reset(dp);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    cout<<calculate(0,0)<<endl;
    return 0;
}

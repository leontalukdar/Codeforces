#include<bits/stdc++.h>

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
#define MOD 1000000007


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

int dp[105][3];

void initialize()
{
    clr(dp);
    dp[0][0]=1;
}

int main()
{
    ll n,k,d;
    while(cin>>n>>k>>d)
    {
        initialize();
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=k;j++)
            {
                if(i-j<0)
                    break;
                if(j<d)
                {
                    dp[i][0]=(dp[i][0]%MOD+dp[i-j][0]%MOD)%MOD;
                    dp[i][1]=(dp[i][1]%MOD+dp[i-j][1]%MOD)%MOD;
                }
                else
                {
                    dp[i][1]=(dp[i][1]%MOD+dp[i-j][0]%MOD)%MOD;
                    dp[i][1]=(dp[i][1]%MOD+dp[i-j][1]%MOD)%MOD;
                }
            }
        }
        cout<<dp[n][1]<<endl;
    }
    return 0;
}




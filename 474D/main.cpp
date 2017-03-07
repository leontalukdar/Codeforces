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
#define MAX 100005
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

ll dp[100005];
int n,k;

void initial()
{
    for(int i=0;i<k;i++)
        dp[i]=1;
}

void calWays()
{
    for(int i=k;i<=100000;i++)
    {
        dp[i]=(dp[i-1]+dp[i-k])%MOD;
    }
}

void cumulativeSum()
{
    dp[0]=0;
    for(int i=1;i<=100000;i++)
    {
        dp[i]=(dp[i]+dp[i-1])%MOD;
    }
}

int main()
{
    cin>>n>>k;
    int a,b;
    initial();
    calWays();
    cumulativeSum();
    while(n--)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",(dp[b]+MOD-dp[a-1])%MOD);
    }
    return 0;
}




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

bool isPrime[100005];
vector<ll>prime;

void genPrime()
{
    ll n=100005;
    ll s=sqrt(n);
    for(ll i=4;i<=n;i+=2)
        isPrime[i]=1;
    for(ll i=3;i<=s;i+=2)
    {
        if(isPrime[i]==0)
        {
            for(ll j=i*i;j<=n;j+=i)
                isPrime[j]=1;
        }
    }
    isPrime[1]=1;
    for(ll i=1;i<(n/2);i++)
    {
        if(isPrime[i]==0)
            prime.pb(i);
    }
}

map<ll,ll>cnt;

int main()
{
    genPrime();
    ll n;
    cin>>n;
    ll x;
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        cnt[x]++;
    }
    ll ans=0;
    for(ll i=0;i<prime.size();i++)
    {
        ll tcnt=0;
        //cout<<prime[i]<<endl;
        for(ll j=prime[i];j<100005;j+=prime[i])
        {
            tcnt+=cnt[j];
            //cout<<tcnt<<endl;
        }
        if(tcnt>ans)
            ans=tcnt;
    }
    cout<<ans<<endl;
    return 0;
}

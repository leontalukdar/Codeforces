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

ll ans,high,low;

ll func(ll x)
{
    return x*(x+1)/2;
}

ll upBin(ll x)
{
    low=x;
    x=(low+high)/2;
    return x;
}

ll lowBin(ll x)
{
    high=x;
    x=(low+high)/2;
    return x;
}

int main()
{
    ll n,m,k;
    while(cin>>n>>m>>k)
    {
        if(n==1)
        {
            cout<<m<<endl;
            continue;
        }
        low=1;
        high=m;
        ans=(low+high)/2;
        while(1)
        {
            ll l=k-1;
            ll r=n-k;
            ll temp=0;
            if(ans-1>r)
            {
                temp+=func(ans-1)-func(ans-r-1);
            }
            else
            {
                temp+=func(ans-1)+r-(ans-1);
            }
            if(ans-1>l)
            {
                temp+=func(ans-1)-func(ans-l-1);
            }
            else
            {
                temp+=func(ans-1)+l-(ans-1);
            }
            temp+=ans;
            if(temp>m)
                ans=lowBin(ans);
            else
                ans=upBin(ans);
            if(ans==low || ans==high)
                break;
        }
        cout<<ans<<endl;
    }
    return 0;
}




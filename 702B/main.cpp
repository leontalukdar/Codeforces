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

map<ll,ll>cnt;
ll ar[100005];
map<ll,ll>visited;

int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
        cnt[ar[i]]++;
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(!visited[ar[i]])
        {
            for(ll j=0;j<32;j++)
            {
                ll x=pow(2,j);
                if(x==ar[i])
                {
                    ll temp=cnt[x]*(cnt[x]-1)/2;
                    ans+=temp;
                    //cout<<ar[i]<<" "<<ans<<endl;
                }
                else if(x>ar[i])
                {
                    ll temp=x-ar[i];
                    if(cnt[temp]&&!visited[temp]&&temp!=ar[i])
                    {
                        ll ntemp=cnt[temp]*cnt[ar[i]];
                        ans+=ntemp;
                        //cout<<ar[i]<<" "<<ans<<endl;
                    }
                }
            }
            visited[ar[i]]=1;
        }
    }
    cout<<ans<<endl;
    return 0;
}




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

vector<ll>v;
set<ll>s[300005];

int main()
{
    ll n,q,t,x,noti=1,ans=0,hold=0;
    cin>>n>>q;
    for(int i=0;i<=n;i++)
        s[i].clear();
    v.clear();
    for(int i=1;i<=q;i++)
    {
        cin>>t>>x;
        if(t==1)
        {
            v.pb(x);
            s[x].insert(noti++);
            ans++;
        }
        else if(t==2)
        {
            ans-=s[x].size();
            s[x].clear();
        }
        else if(t==3)
        {
            if(x>hold)
            {
                for(int j=hold+1;j<=x;j++)
                {
                    ll temp=v[j-1];
                    if(s[temp].find(j)!=s[temp].end())
                    {
                        ans--;
                        s[temp].erase(j);
                    }
                }
                hold=x;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}




#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<string,int> psi;
typedef pair<int,string> pis;
typedef pair<string,string> pss;
typedef pair<ll,ll> pll;
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

int strToInt(string s) {
	stringstream ss(s);
	int x;
	ss >> x;
	return x;
}

string intToStr(int a) {
	stringstream ss;
	ss << a;
	string str = ss.str();
	return str;
}

//int fx[]={0,0,1,-1};
//int fy[]={1,-1,0,0};
//int fx[]={1,1,-1,-1};
//int fy[]={1,-1,1,-1};
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

vector<pair<ll,pll> >vp;
ll ar1[200005];
ll ar2[200005];

int main()
{
    ll n,k;
    while(cin>>n>>k)
    {
        vp.clear();
        for(int i=0;i<n;i++)
            cin>>ar1[i];
        for(int i=0;i<n;i++)
        {
            cin>>ar2[i];
            vp.pb(mp(ar1[i]-ar2[i],mp(ar2[i],ar1[i])));
        }
        sort(vp.begin(),vp.end());
        /*for(int i=0;i<vp.size();i++)
        {
            cout<<vp[i].first<<" "<<vp[i].second.first<<" "<<vp[i].second.second<<endl;
        }*/
        ll cost=0;
        ll i=0;
        for(;i<k;i++)
        {
            cost+=vp[i].second.second;
        }
        for(;i<n;i++)
        {
            if(vp[i].first<=0)
                cost+=vp[i].second.second;
            else
                cost+=vp[i].second.first;
        }
        cout<<cost<<endl;
    }
    return 0;
}




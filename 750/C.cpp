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

vector<pii>v;

int inf=1000000000;

int main()
{
    int n,x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        v.pb(mp(x,y));
    }
    int rating1,rating2;
    bool impossible=false;
    bool flag=false;
    for(int i=0;i<v.size();i++)
    {
        if(i==0 && v[i].second==1)
        {
            rating1=1900;
            rating2=inf;
        }
        if(i==0 && v[i].second==2)
        {
            rating1=-1*inf;
            rating2=1899;
        }
        if(v[i].second==1)
        {
            if(rating2<1900)
            {
                impossible=true;
            }
            if(rating1<1900)
                rating1=1900;
            rating1+=v[i].first;
            rating2+=v[i].first;
        }
        if(v[i].second==2)
        {
            if(rating1>=1900)
            {
                impossible=true;
            }
            if(rating2>=1900)
                rating2=1899;
            rating1+=v[i].first;
            rating2+=v[i].first;
        }
        if(v[i].second==2)
            flag=true;
    }
    if(!flag)
    {
        cout<<"Infinity"<<endl;
    }
    else if(impossible)
    {
        cout<<"Impossible"<<endl;
    }
    else
        cout<<max(rating1,rating2)<<endl;
    return 0;
}




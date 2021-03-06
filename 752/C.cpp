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

int main()
{
    double r,u,l,d;
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(s[0]=='R'||s[0]=='L')
    {
        r=l=1.0;
        u=d=0.5;
    }
    else
    {
        r=l=0.5;
        u=d=1.0;
    }
    double ans=0;
    bool left,right,up,down;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='R' && right==false)
        {
            ans+=r;
            right=true;
            left=false;
        }
        if(s[i]=='L' && left==false)
        {
            ans+=l;
            right=false;
            left=true;
        }
        if(s[i]=='U' && up==false)
        {
            ans+=u;
            up=true;
            down=false;
        }
        if(s[i]=='D' && down==false)
        {
            ans+=d;
            up=false;
            down=true;
        }
    }
    cout<<ll(ans)<<endl;
    return 0;
}




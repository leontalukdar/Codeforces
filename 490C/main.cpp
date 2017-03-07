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

ll ar1[1000006];
ll ar2[1000006];

int main()
{
    string s;
    ll a,b;
    while(cin>>s)
    {
        ll pos=-1;
        cin>>a>>b;
        ll mod=0;
        reset(ar1);
        reset(ar2);
        for(int i=0;i<s.length();i++)
        {
            mod=mod*10+(s[i]-'0');
            mod%=a;
            ar1[i]=mod;
        }
        mod=(s[s.length()-1]-'0')%b;
        ll mul=10;
        ar2[s.length()-1]=mod;
        for(int i=s.length()-2;i>=0;i--)
        {
            mod=((s[i]-'0')*mul+mod)%b;
            mul=(mul*10)%b;
            ar2[i]=mod;
        }
        for(int i=0;i<s.length()-1;i++)
        {
            if(ar1[i]==0&&ar2[i+1]==0&&s[i+1]!='0')
            {
                pos=i;
                break;
            }
        }
        if(pos==-1)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<=pos;i++)
                cout<<s[i];
            cout<<endl;
            for(int i=pos+1;i<s.length();i++)
                cout<<s[i];
            cout<<endl;
        }
    }
    return 0;
}




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
    ll n,p;
    string s;
    while(cin>>n>>p)
    {
        cin>>s;
        ll dis=0;
        p--;
        n--;
        if(p>n/2)
        {
            p=n-p;
        }
        ll left=p,right=p,hright=-1,hleft=-1,flag1=0,flag2=0;
        if(p-0>n/2-p)
        {
            while(right<=n/2)
            {
                if(s[right]!=s[n-right])
                {
                    dis+=abs(p-right);
                    ll tdis=abs(s[right]-s[n-right]);
                    tdis=min(tdis,26-tdis);
                    dis+=tdis;
                    p=right;
                    s[right]=s[n-right];
                    hright=right;
                }
                right++;
            }
            p=left;
            while(left>=0)
            {
                if(s[left]!=s[n-left])
                {
                    if(hright!=-1&&flag1==0)
                    {
                        dis+=abs(left-hright);
                        flag1=1;
                    }
                    else
                        dis+=abs(p-left);
                    ll tdis=abs(s[left]-s[n-left]);
                    tdis=min(tdis,26-tdis);
                    dis+=tdis;
                    p=left;
                    s[left]=s[n-left];
                }
                left--;
            }
        }
        else
        {
            while(left>=0)
            {
                if(s[left]!=s[n-left])
                {
                    dis+=abs(p-left);
                    ll tdis=abs(s[left]-s[n-left]);
                    tdis=min(tdis,26-tdis);
                    dis+=tdis;
                    p=left;
                    s[left]=s[n-left];
                    hleft=left;
                }
                left--;
            }
            p=right;
            while(right<=n/2)
            {
                if(s[right]!=s[n-right])
                {
                    if(hleft!=-1&&flag2==0)
                    {
                        dis+=abs(right-hleft);
                        flag2=1;
                    }
                    else
                        dis+=abs(p-right);
                    ll tdis=abs(s[right]-s[n-right]);
                    tdis=min(tdis,26-tdis);
                    dis+=tdis;
                    p=right;
                    s[right]=s[n-right];
                }
                right++;
            }
        }
        cout<<dis<<endl;
    }
    return 0;
}




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

ll ar[505][505];

int main()
{
    //cin.sync_with_stdio(false);
    ll n;
    while(cin>>n)
    {
        int posx,posy;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>ar[i][j];
                if(ar[i][j]==0)
                {
                    posx=i;
                    posy=j;
                }
            }
        }
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        ll pd=0,sd=0,t=0,k=0;
        for(int i=1;i<=n;i++)
        {
            int j=1;
            if(posx==j)
                j++;
            t+=ar[j][i];
            k+=ar[posx][i];
        }
        ar[posx][posy]=t-k;
        bool found=false;
        for(int i=1;i<=n;i++)
        {
            ll temp=0;
            ll col=0;
            for(int j=1;j<=n;j++)
            {
                temp+=ar[i][j];
                col+=ar[j][i];
                if(i==j)
                    pd+=ar[i][j];
                if(i==(n-j+1))
                    sd+=ar[i][j];
            }
            if(temp!=t || col!=t)
            {
                found=true;
                break;
            }
        }
        if(pd!=sd || pd!=t)
            found=true;
        if(t-k<=0)
            found=true;
        if(found)
            cout<<-1<<endl;
        else
            cout<<t-k<<endl;
    }
    return 0;
}




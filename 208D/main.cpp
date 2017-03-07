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

ll prizes[6];
ll bars[55];
ll countPrizes[6];

int main()
{
    ll n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
            cin>>bars[i];
        for(int i=0;i<5;i++)
            cin>>prizes[i];
        clr(countPrizes);
        ll ans=0;
        ll remain=0;
        for(int i=0;i<n;i++)
        {
            ll curBar=remain+bars[i];
            while(curBar>=prizes[0])
            {
                int j=4;
                for(;j>=0;j--)
                {
                    if(curBar>=prizes[j])
                        break;
                }
                ll temp=curBar/prizes[j];
                curBar=curBar%prizes[j];
                countPrizes[j]+=temp;
            }
            remain=curBar;
        }
        for(int i=0;i<=4;i++)
            cout<<countPrizes[i]<<" ";
        cout<<endl<<remain<<endl;
    }
    return 0;
}




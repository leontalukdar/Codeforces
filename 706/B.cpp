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

map<ll,int>m;
ll ar[100005];
ll temp[100005];

int main()
{
    int n,q,x;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        temp[ar[i]]++;
    }
    sort(ar,ar+n);
    int cnt=0;
    for(int i=ar[0],j=0;i<=ar[n-1];i++)
    {
        if(i==ar[j])
        {
            cnt+=temp[ar[j]];
            while(ar[j]==ar[j+1])
                j++;
            j++;
        }
        m[i]=cnt;
    }
    cin>>q;
    while(q--)
    {
        cin>>x;
        if(x<ar[0])
            cout<<0<<endl;
        else if(x>ar[n-1])
            cout<<n<<endl;
        else
            cout<<m[x]<<endl;
    }
    return 0;
}




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

map<int,int> mapi;
map<int,int> mark;
map<int,int>::iterator it;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    int fa[n+1],b[m+1],flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>fa[i];
        mapi[fa[i]]=i+1;
        mark[fa[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        it=mapi.find(b[i]);
        if(it!=mapi.end())
        {
            if(mark[b[i]]>1 && flag!=2)
                flag=1;
            v.pb(mapi[b[i]]);
        }
        else
            flag=2;
    }

    if(flag==2)
        cout<<"Impossible"<<endl;
    else if(flag==1)
        cout<<"Ambiguity"<<endl;
    else
    {
        cout<<"Possible"<<endl;
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}




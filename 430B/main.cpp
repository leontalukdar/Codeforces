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

vector<int>v;
int n,k,x;

int scale(vector<int>temp)
{
    //cout<<temp.size()<<endl;
    while(1)
    {
        int cnt=1;
        int total=1;
        int pos=0;
        for(int i=1;i<temp.size();i++)
        {
            if(temp[i]==temp[i-1])
                cnt++;
            else
                cnt=1;
            if(cnt>total)
            {
                total=cnt;
                pos=i;
            }
        }
        if(total>2)
        {
            temp.erase(temp.begin()+(pos-total+1),temp.begin()+pos+1);
        }
        else
            break;
    }
    int x=n-temp.size();
    return max(0,x);
}

int main()
{
    cin>>n>>k>>x;
    v.pb(x);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.pb(x);
    }
    int total=6;
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(i>0)
            swap(v[i],v[i-1]);
        int temp=scale(v);
        res=max(res,temp);
    }
    cout<<res<<endl;
    return 0;
}




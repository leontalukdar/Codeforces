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

vector<ll>v;

int stringToInt(string s)
{
    istringstream ss(s);
    int x;
    ss>>x;
    return x;
}

void genLuckyNumber(string s)
{
    v.pb(ll(stringToInt(s)));
    int flag=0;
    while(1)
    {
        if(s[s.length()-1]=='7')
        {
            s[s.length()-1]='4';
            v.pb(ll(stringToInt(s)));
        }
        else
        {
            int i;
            for(i=s.length()-1;i>=0;i--)
            {
                if(s[i]=='7')
                {
                    flag=1;
                    break;
                }
                else
                    flag=0;
            }
            if(!flag)
                break;
            swap(s[i],s[i+1]);
            for(i+=1;i<s.length();i++)
            {
                s[i]='7';
            }
            v.pb(ll(stringToInt(s)));
        }
    }
}

int main()
{
    string s;
    for(int i=0;i<9;i++)
    {
        s+="7";
        genLuckyNumber(s);
    }
    v.pb(4444444444);
    sort(v.begin(),v.end());
    ll l,h;
    cin>>l>>h;
    ll sum=0;
    for(ll i=0;i<v.size();i++)
    {
        if(l>h)
            break;
        if(v[i]<l)
            continue;
        ll dif=min(v[i]-l,h-l);
        l=v[i]+1;
        sum+=(dif+1)*v[i];
    }
    cout<<sum<<endl;
    return 0;
}




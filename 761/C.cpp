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
#define inf 1000000000
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

int strToInt(string s) {
	stringstream ss(s);
	int x;
	ss >> x;
	return x;
}

string intToStr(int a) {
	stringstream ss;
	ss << a;
	string str = ss.str();
	return str;
}

//int fx[]={0,0,1,-1};
//int fy[]={1,-1,0,0};
//int fx[]={1,1,-1,-1};
//int fy[]={1,-1,1,-1};
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

int dp[55][3][3][3];
int n,m;

vector<string>pass;

int findPass(int i,int isDig,int isLater,int isSym)
{
    if(i>=n)
    {
        if(isDig&&isLater&&isSym)
            return 0;
        return inf;
    }
    int step=dp[i][isDig][isLater][isSym];
    if(step!=-1)
        return step;
    step=inf;
    for(int j=0;j<m;j++)
    {
        int dis=min(j,m-j);
        int dig=isDig;
        int later=isLater;
        int sym=isSym;
        if(pass[i][j]>='0'&&pass[i][j]<='9')
            dig=1;
        else if(pass[i][j]>='a'&&pass[i][j]<='z')
            later=1;
        else
            sym=1;
        step=min(step,findPass(i+1,dig,later,sym)+dis);
        dp[i][isDig][isLater][isSym]=step;
    }
    return dp[i][isDig][isLater][isSym];
}


int main()
{
    string s;
    while(cin>>n>>m)
    {
        pass.clear();
        reset(dp);
        for(int i=0;i<n;i++)
        {
            cin>>s;
            pass.pb(s);
        }
        int ans=findPass(0,0,0,0);
        cout<<ans<<endl;
    }
    return 0;
}




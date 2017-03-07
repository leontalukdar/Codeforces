#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <queue>
#include <stack>
#include <cstring>
#include <ctype.h>

using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
#define pb push_back
#define mp make_pair
#define PI acos(-1.0)

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

//int fx[]={0,0,1,-1};
//int fy[]={1,-1,0,0};
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

string s;
vector<int>v;
ll ar[100005];
void reset(){
    memset(ar,0,sizeof ar);
}
int main()
{
    ll n,a;
    cin>>n>>s;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v.pb(a);
    }

    int found=0;
    reset();
    for(ll i=0;i<v.size();)
    {
        if(v[i]>=s.length())
        {
            found=1;
            break;
        }
        if(s[i]=='>')
            i+=v[i];
        else if(s[i]=='<')
            i-=v[i];
        if(i<0||i>=s.length())
        {
            found=1;
            break;
        }
        if(!ar[i])
            ar[i]=1;
        else
        {
            break;
        }
    }
    if(found)
        cout<<"FINITE"<<endl;
    else
        cout<<"INFINITE"<<endl;
    return 0;
}




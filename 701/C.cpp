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

map<char,ll>check;
map<char,ll>cnt;

int main()
{
    string s;
    ll n;
    cin>>n>>s;
    ll type=0;
    for(ll i=0;i<s.length();i++)
    {
        if(!cnt[s[i]])
            type++;
        cnt[s[i]]++;
    }
    ll start=0,end=0;
    ll ttype=0;
    cnt.clear();
    for(ll i=0;i<s.length();i++)
    {
        if(!check[s[i]])
            ttype++;
        check[s[i]]=1;
        cnt[s[i]]++;
        if(ttype==type)
        {
            end=i;
            break;
        }
    }
    ll dist=end-start;
    //cout<<dist<<endl;
    //cout<<ttype<<" "<<type<<endl;
    for(start=0;end<s.length();)
    {
        //cout<<cnt[start]<<endl;
        if(cnt[s[start]]>0 && ttype==type)
        {
            cnt[s[start]]--;
            if(cnt[s[start]]<=0)
                ttype--;
            start++;
        }
        else
        {
            end++;
            if(end>=s.length())
                break;
            cnt[s[end]]++;
            if(cnt[s[end]]==1)
                ttype++;
        }
        //cout<<ttype<<" "<<start<<" "<<end<<endl;
        if(ttype==type)
        {
            dist=min(dist,(end-start));
        }
    }
    end=min(end,ll(s.length()-1));
    //cout<<start<<" "<<end<<endl;
    cout<<dist+1<<endl;
    return 0;
}




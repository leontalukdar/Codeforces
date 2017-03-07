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
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

vector<psi>v;
priority_queue<int>q;
string s;

int main()
{
    int n,x;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s=="insert")
        {
            scanf("%d",&x);
            q.push(-x);
            v.pb(mp(s,x));
        }
        else if(s=="removeMin")
        {
            if(!q.empty())
            {
                q.pop();
                v.pb(mp(s,INT_MAX));
            }
            else
            {
                v.pb(mp("insert",0));
                v.pb(mp(s,INT_MAX));
            }
        }
        else
        {
            scanf("%d",&x);
            if(!q.empty())
            {
                while(-q.top()<x&&!q.empty())
                {
                    q.pop();
                    v.pb(mp("removeMin",INT_MAX));
                }
                if(!q.empty())
                {
                    if(-q.top()==x)
                    {
                        v.pb(mp(s,x));
                    }
                    else
                    {
                        v.pb(mp("insert",x));
                        q.push(-x);
                        v.pb(mp(s,x));
                    }
                }
                else
                {
                    v.pb(mp("insert",x));
                    q.push(-x);
                    v.pb(mp(s,x));
                }
            }
            else
            {
                v.pb(mp("insert",x));
                q.push(-x);
                v.pb(mp(s,x));
            }
        }
    }
    printf("%d\n",v.size());
    for(int i=0;i<v.size();i++)
    {
        if(v[i].second!=INT_MAX)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
        else
            cout<<v[i].first<<endl;
    }
    return 0;
}




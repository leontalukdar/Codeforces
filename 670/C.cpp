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

map<int,int>m;
vector<pii>p;

int main()
{
    int n,x,index=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        m[x]++;
    }
    int k;
    cin>>k;
    int lan[k+1];
    int sub[k+1];
    for(int i=0; i<k; i++)
        cin>>lan[i];
    for(int i=0; i<k; i++)
        cin>>sub[i];
    int mini=0;
    for(int i=0; i<k; i++)
    {
        if(m[lan[i]])
        {
            if(m[lan[i]]>mini)
            {
                mini=m[lan[i]];
                index=i+1;
            }
        }
    }
    if(!mini)
    {
        for(int i=0; i<k; i++)
        {
            if(m[sub[i]])
            {
                if(m[lan[i]]>mini)
                {
                    mini=m[lan[i]];
                    index=i+1;
                }
            }
        }
        if(!index)
            cout<<k<<endl;
        else
            cout<<index<<endl;
        return 0;
    }
    for(int i=0;i<k;i++)
    {
        if(m[lan[i]]==mini)
            p.pb(mp(lan[i],i));
    }
    mini=0;
    for(int i=0;i<p.size();i++)
    {
        if(m[sub[p[i].second]])
        {
            if(m[sub[p[i].second]]>mini)
            {
                mini=m[sub[p[i].second]];
                index=p[i].second+1;
            }
        }
    }
    cout<<index<<endl;
    return 0;
}




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

map<string,int>m;
vector<string>v;
string s;
string temp;

int main()
{
    cin>>s;
    for(int i=s.length()-2; i>=5; i--)
    {
        int dif=s.length()-(i+1);
        if(dif==1)
        {
            temp+=s[i];
            temp+=s[i+1];
            if(!m[temp])
            {
                v.pb(temp);
                m[temp]=1;
            }
            temp.clear();
        }
        else if(dif==2)
        {
            temp+=s[i];
            temp+=s[i+1];
            temp+=s[i+2];
            if(!m[temp])
            {
                v.pb(temp);
                m[temp]=1;
            }
            temp.clear();
        }
        else if(dif==3)
        {
            temp+=s[i];
            temp+=s[i+1];
            if(!m[temp])
            {
                v.pb(temp);
                m[temp]=1;
            }
            temp.clear();
        }
        else if(dif==5)
        {
            temp+=s[i];
            temp+=s[i+1];
            temp+=s[i+2];
            if(!m[temp])
            {
                v.pb(temp);
                m[temp]=1;
            }
            temp.clear();
            temp+=s[i];
            temp+=s[i+1];
            if(!m[temp])
            {
                v.pb(temp);
                m[temp]=1;
            }
            temp.clear();
        }
        else
        {
            temp+=s[i];
            temp+=s[i+1];
            if(!m[temp])
            {
                v.pb(temp);
                m[temp]=1;
            }
            temp.clear();
            temp+=s[i+2];
            temp+=s[i+3];
            temp+=s[i+4];
            if(!m[temp])
            {
                v.pb(temp);
                m[temp]=1;
            }
            temp.clear();
            temp+=s[i];
            temp+=s[i+1];
            temp+=s[i+2];
            if(!m[temp])
            {
                v.pb(temp);
                m[temp]=1;
            }
            temp.clear();
            temp+=s[i+3];
            temp+=s[i+4];
            if(!m[temp])
            {
                v.pb(temp);
                m[temp]=1;
            }
            temp.clear();
        }
    }
    cout<<v.size()<<endl;
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<endl;
    s.clear();
    v.clear();
    m.clear();
    return 0;
}




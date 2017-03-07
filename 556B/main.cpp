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

int main()
{
    vector<int>v;
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.pb(a);
    }
    if(n==1)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int i=0;i<v.size();i++)
        {
            if(i%2)
            {
                v[i]++;
                if(v[i]==n)
                    v[i]=0;
            }
            else
            {
                v[i]--;
                if(v[i]<0)
                    v[i]=n-1;
            }
        }
        int flag=0;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]<v[i+1])
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}


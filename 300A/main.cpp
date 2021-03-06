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
    int n,negi=0;
    vector<int>neg;
    vector<int>pos;
    vector<int>zero;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]<0)
            negi++;

    }
    sort(ar,ar+n);
    if(negi%2==1)
    {
        neg.pb(ar[0]);
        for(int i=1;i<n;i++)
        {
            if(ar[i]!=0)
                pos.pb(ar[i]);
            else
                zero.pb(ar[i]);
        }
    }
    else
    {
        neg.pb(ar[0]);
        zero.pb(ar[1]);
        for(int i=2;i<n;i++)
        {
            if(ar[i]!=0)
                pos.pb(ar[i]);
            else
                zero.pb(ar[i]);
        }
    }
    cout<<neg.size()<<" ";
    for(int i=0;i<neg.size();i++)
        cout<<neg[i]<<" ";
    cout<<endl;
    cout<<pos.size()<<" ";
    for(int i=0;i<pos.size();i++)
        cout<<pos[i]<<" ";
    cout<<endl;
    cout<<zero.size()<<" ";
    for(int i=0;i<zero.size();i++)
        cout<<zero[i]<<" ";
    cout<<endl;
    return 0;
}




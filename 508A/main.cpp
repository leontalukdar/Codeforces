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

int row,col,k;

map<int,map<int,int>>m;

bool check(int i,int j)
{
    m[i][j]=1;
    if(m[i+1][j]&&m[i+1][j+1]&&m[i][j+1])
        return true;
    if(m[i][j+1]&&m[i-1][j]&&m[i-1][j+1])
        return true;
    if(m[i+1][j]&&m[i+1][j-1]&&m[i][j-1])
        return true;
    if(m[i][j-1]&&m[i-1][j-1]&&m[i-1][j])
        return true;
    return false;
}

int main()
{
    cin>>row>>col>>k;
    int moves=0;
    int a,b;
    int found=0;
    for(int i=0;i<k;i++)
    {
        cin>>a>>b;
        if(check(a,b)&&!found)
        {
            found=1;
            moves++;
        }
        else if(!found)
            moves++;
        else
            continue;
    }
    if(found)
        cout<<moves<<endl;
    else
        cout<<0<<endl;
    return 0;
}




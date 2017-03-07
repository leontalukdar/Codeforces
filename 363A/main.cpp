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

map<char,string>m;
void reset()
{
    m['0']="O-|-OOOO";
    m['1']="O-|O-OOO";
    m['2']="O-|OO-OO";
    m['3']="O-|OOO-O";
    m['4']="O-|OOOO-";
    m['5']="-O|-OOOO";
    m['6']="-O|O-OOO";
    m['7']="-O|OO-OO";
    m['8']="-O|OOO-O";
    m['9']="-O|OOOO-";
}

int main()
{
    string s;
    cin>>s;
    reset();
    for(int i=s.length()-1;i>=0;i--)
        cout<<m[s[i]]<<endl;
    return 0;
}




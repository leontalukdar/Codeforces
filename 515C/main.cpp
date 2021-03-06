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

map<char,string>mymap;
void setmap()
{
    mymap['0']="";
    mymap['1']="";
    mymap['2']="2";
    mymap['3']="3";
    mymap['4']="322";
    mymap['5']="5";
    mymap['6']="53";
    mymap['7']="7";
    mymap['8']="7222";
    mymap['9']="7332";
}

int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    setmap();
    string s1=mymap[s[0]];
    for(int i=1;i<s.length();i++)
    {
        s1+=mymap[s[i]];
    }
    sort(s1.rbegin(),s1.rend());
    cout<<s1<<endl;
    return 0;
}




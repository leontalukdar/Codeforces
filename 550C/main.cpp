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


int dig_3(char a,char b,char c)
{
    int x=a-'0';
    int y=b-'0';
    int z=c-'0';
    return x*100+y*10+z;
}

int dig_2(char a,char b)
{
    int x=a-'0';
    int y=b-'0';
    return x*10+y;
}

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0'||s[i]=='8')
        {
            cout<<"YES"<<endl;
            cout<<s[i]<<endl;
            return 0;
        }
    }
    for(int i=0;i<s.length()-1;i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            int dig=dig_2(s[i],s[j]);
            if(dig%8==0)
            {
                cout<<"YES"<<endl;
                cout<<dig<<endl;
                return 0;
            }
        }
    }
    for(int i=0;i<s.length()-1;i++)
    {
        for(int j=i+1;j<s.length()-1;j++)
        {
            for(int k=j+1;k<s.length();k++)
            {
                int dig=dig_3(s[i],s[j],s[k]);
                if(dig%8==0)
                {
                    cout<<"YES"<<endl;
                    cout<<dig<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}




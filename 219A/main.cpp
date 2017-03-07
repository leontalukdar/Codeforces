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

int str[26];
int cnt[26];

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        str[s[i]-'a']++;
    }
    for(int i=0;i<s.length();i++)
    {
        if(str[s[i]-'a']<n)
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(str[i]%n==0)
            cnt[i]=str[i]/n;
        else
        {
            cout<<-1<<endl;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(cnt[j])
            {
                for(int k=0;k<cnt[j];k++)
                    cout<<char(j+'a');
            }
        }
    }
    cout<<endl;
    return 0;
}




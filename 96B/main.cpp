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

string s;

bool check()
{
    int four=count(s.begin(),s.end(),'4');
    int seven=count(s.begin(),s.end(),'7');
    if(four+seven==s.length()&&four==seven)
        return true;
    else
        return false;
}

int main()
{
    cin>>s;
    if(check())
    {
        cout<<s<<endl;
        return 0;
    }
    int found=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]<='4'&&!found)
        {
            if(s[i]<'4')
                found=1;
            s[i]='4';
        }
        else if(s[i]<='7'&&!found)
        {
            if(s[i]<'7')
                found=1;
            s[i]='7';
        }
        else if(found)
        {
            s[i]='4';
        }
        else
        {
            s[i]='4';
            string temp=s;
            s='4';
            s+=temp;
            found=1;
        }
    }
    int four=count(s.begin(),s.end(),'4');
    int seven=count(s.begin(),s.end(),'7');
    int cat=0;
    if(s.length()%2)
    {
        if(four>seven)
        {
            s+='7';
        }
        else
        {
            string temp=s;
            s='4';
            s+=temp;
        }
        cat=1;
    }
    if(check())
    {
        cout<<s<<endl;
        return 0;
    }
    four=count(s.begin(),s.end(),'4');
    seven=count(s.begin(),s.end(),'7');
    if(four>seven)
    {
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='4')
                s[i]='7';
            if(check())
            {
                cout<<s<<endl;
                return 0;
            }
        }
    }
    else
    {
        if(!cat)
        {
            string temp=s;
            s="44";
            s+=temp;
        }
        if(check())
        {
            cout<<s<<endl;
            return 0;
        }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='7')
                s[i]='4';
            if(check())
            {
                cout<<s<<endl;
                return 0;
            }
        }
    }
    return 0;
}




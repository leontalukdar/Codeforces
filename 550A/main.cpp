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
    int ab=0,ba=0,foundab=0,foundba=0;
    string s;
    cin>>s;
    int index1,index2;
    for(int i=0; i<s.length()-1;i++)
    {
        if(s[i]=='A'&&s[i+1]=='B')
        {
            index1=i;
            index2=i+1;
            foundab=1;
            break;
        }
    }
    if(foundab)
    {
        for(int i=0; i<s.length()-1; i++)
        {
            if(i==index1)i++;
            else if(s[i]=='B'&&s[i+1]=='A'&&i+1!=index1)
            {
                foundba=1;
                break;
            }
        }
    }
    if(!foundab||!foundba)
    {
        foundab=foundba=0;
        for(int i=0; i<s.length()-1;i++)
        {
            if(s[i]=='B'&&s[i+1]=='A')
            {
                index1=i;
                index2=i+1;
                foundba=1;
                break;
            }
        }
        if(foundba)
        {
            for(int i=0; i<s.length()-1; i++)
            {
                if(i==index1)i++;
                else if(s[i]=='A'&&s[i+1]=='B'&&i+1!=index1)
                {
                    foundab=1;
                    break;
                }
            }
        }
    }
    if(foundab&&foundba)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}




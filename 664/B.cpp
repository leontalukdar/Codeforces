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
    char ch;
    int number;
    vector<char>v;
    while(cin>>ch)
    {
        v.pb(ch);
        if(ch=='=')
            break;
    }
    cin>>number;
    int nplus=0,nminus=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]=='+')
            nplus++;
        if(v[i]=='-')
            nminus++;
    }
    int templus=nplus;
    int tempminus=nminus;
    if(nplus*number>=nminus)
    {
        cout<<"Possible"<<endl;
        if(nplus>nminus)
        {
            for(int i=0;i<v.size();i++)
            {
                if(v[i]=='?'&&templus!=1)
                    cout<<"1 ";
                else if(v[i]=='?'&&templus==1)
                {
                    cout<<(number-(nplus+1)+nminus)<<" ";
                }
                else if(v[i]=='+')
                {
                    cout<<"+ ";
                    templus--;
                }
                else if(v[i]=='-')
                {
                    cout<<"- ";
                    tempminus--;
                }
                else if(v[i]=='=')
                {
                    cout<<"= ";
                    break;
                }
            }
            cout<<number<<endl;
        }
        else
        {
            for(int i=0;i<v.size();i++)
            {
                if(s[i]=='?'&&templus==nplus)
                    cout<<number<<" ";
                else if(s[i]=='?')
                {

                }
                else if(v[i]=='+')
                {
                    cout<<"+ ";
                    templus--;
                }
                else if(v[i]=='-')
                {
                    cout<<"- ";
                    tempminus--;
                }
                else if(v[i]=='=')
                {
                    cout<<"= ";
                    break;
                }
            }
        }
    }
    else
        cout<<"Impossible"<<endl;
    return 0;
}




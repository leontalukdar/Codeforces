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
    int n;
    string s;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        int len=s.length()-4;
        if(len==1)
        {
            if(s[4]=='9')
                cout<<"1989"<<endl;
            else
                cout<<"199"<<s[4]<<endl;
        }
        else if(len==2)
        {
            if(s[4]=='9')
                cout<<"19"<<s[4]<<s[5]<<endl;
            else
                cout<<"20"<<s[4]<<s[5]<<endl;
        }
        else if(len==3)
        {
            if(s[4]=='0')
                cout<<"10"<<s[4]<<s[5]<<s[6]<<endl;
            else
                cout<<"2"<<s[4]<<s[5]<<s[6]<<endl;
        }
        else if(len==4)
        {
            if(s[4]-'0'>2)
            {
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }
            else if(s[4]=='0')
            {
                cout<<"10";
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }
            else
            {
                cout<<"1";
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }

        }
        else if(len==5)
        {
            if(s[4]-'0'>1)
            {
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }
            else if(s[4]=='0')
            {
                cout<<"10";
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }
            else
            {
                cout<<"1";
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }
        }
        else if(len==6)
        {
            if(s[4]-'0'>1)
            {
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }
            else if(s[4]=='0')
            {
                cout<<"10";
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }
            else
            {
                cout<<"1";
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }
        }
        else if(len==7)
        {
            if(s[4]-'0'>1)
            {
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }
            else if(s[4]=='0')
            {
                cout<<"10";
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }
            else
            {
                cout<<"1";
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }
        }
        else if(len==8)
        {
            if(s[4]-'0'>1)
            {
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }
            else if(s[4]=='0')
            {
                cout<<"10";
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }
            else
            {
                cout<<"1";
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }
        }
        else if(len==9)
        {
            if(s[4]-'0'>1)
            {
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }
            else if(s[4]=='0')
            {
                cout<<"10";
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }
            else
            {
                cout<<"1";
                for(int i=4;i<s.length();i++)
                    cout<<s[i];
                cout<<endl;
            }
        }
    }
    return 0;
}




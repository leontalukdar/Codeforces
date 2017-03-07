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
    int zeroes,ones,div,mod;
    cin>>zeroes>>ones;
    if((zeroes+1)*2>=ones&&zeroes<=ones)
    {
        int found;
        div=ones/zeroes;
        mod=ones%zeroes;
        int total=(div-1)*zeroes+mod;
        for(int i=1; i<=total; i++)
        {
            if(ones>1&&zeroes>0)
            {
                cout<<110;
                ones-=2;
                zeroes--;
                found=1;
            }
            else if(ones>1)
            {
                cout<<11;
                ones-=2;
                found=0;
            }
        }
        if(!found)
        {
            while(zeroes>0||ones>0)
            {
                if(zeroes)
                {
                    cout<<0;
                    zeroes--;
                }
                if(ones)
                {
                    cout<<1;
                    ones--;
                }
            }
        }
        else
        {
            while(zeroes>0||ones>0)
            {
                if(ones>0)
                {
                    cout<<1;
                    ones--;
                }
                if(zeroes>0)
                {
                    cout<<0;
                    zeroes--;
                }
            }
        }
    }
    else if(abs(zeroes-ones)<=1)
    {
        while(zeroes||ones)
        {
            if(zeroes)
            {
                cout<<0;
                zeroes--;
            }
            if(ones)
            {
                cout<<1;
                ones--;
            }
        }
    }
    else
        cout<<-1;
    cout<<endl;
    return 0;
}




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

int color[4];
int index[100005];
int matrix[100005][4];

void resetcolor()
{
    memset(color,0,sizeof color);
}

void resetindex()
{
    memset(index,0,sizeof index);
}

int main()
{
    int n,m,x;
    cin>>n>>m;
    resetindex();
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=3; j++)
            cin>>matrix[i][j];
        }
    for(int i=1; i<=m; i++)
    {
        resetcolor();
        for(int j=1; j<=3; j++)
        {
            if(index[matrix[i][j]])
                color[index[matrix[i][j]]]=1;
        }
        for(int j=1; j<=3; j++)
        {
            if(index[matrix[i][j]])
                continue;
            if(!color[1])
            {
                index[matrix[i][j]]=1;
                color[1]=1;
            }
            else if(!color[2])
            {
                index[matrix[i][j]]=2;
                color[2]=2;
            }
            else
            {
                index[matrix[i][j]]=3;
                color[3]=3;
            }
        }
    }
    for(int i=1; i<=n; i++)
        cout<<index[i]<<" ";
    cout<<endl;
    return 0;
}




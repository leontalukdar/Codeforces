#include <iostream>
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

#define ll long long int
#define pii pair<int,int>
#define PI acos(-1.0)

using namespace std;

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

//int fx[]={0,0,1,-1};
//int fy[]={1,-1,0,0};
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n+2][3];
    ar[0][0]=ar[0][1]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<2;j++)
            cin>>ar[i][j];
    }
    int showtime=0;
    for(int i=1;i<=n;i++)
    {
        showtime+=(ar[i][0]-ar[i-1][1]-1)%m+(ar[i][1]-ar[i][0]+1);
    }
    cout<<showtime<<endl;
    return 0;
}




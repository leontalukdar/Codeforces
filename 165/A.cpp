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
    int n;
    cin>>n;
    int xy[n+1][2];
    int l,r,u,d;
    for(int i=0;i<n;i++)
    {
        cin>>xy[i][0]>>xy[i][1];
    }
    int supercenter=0;
    for(int i=0;i<n;i++)
    {
        l=r=u=d=0;
        int found=0;
        for(int j=0;j<n;j++)
        {
            if(j==i)
                continue;
            if(xy[j][0]==xy[i][0])
            {
                if(xy[j][1]>xy[i][1])
                    r=1;
                else if(xy[j][1]<xy[i][1])
                    l=1;
            }
            else if(xy[j][1]==xy[i][1])
            {
                if(xy[j][0]>xy[i][0])
                    u=1;
                else if(xy[j][0]<xy[i][0])
                    d=1;
            }
            if(l && r && u && d)
            {
                found=1;
                break;
            }
        }
        if(found)
            supercenter++;
    }
    cout<<supercenter<<endl;
    return 0;
}




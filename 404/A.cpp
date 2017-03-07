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
    char ch[n+1][n+1];
    int mat[n+1][n+1];
    memset(mat,0,sizeof mat);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin>>ch[i][j];
    }
    int dch=ch[0][0];
    int ndch=ch[0][1];
    if(dch==ndch)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
    {

        if(ch[i][i]!=ch[n/2][n/2])
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(ch[i][n-i-1]!=ch[n/2][n/2])
        {
            cout<<"NO"<<endl;
            return 0;
        }
        mat[i][i]=1;
        mat[i][n-i-1]=1;
        mat[n-i-1][i]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!mat[i][j])
            {
                if(ch[i][j]!=ch[0][1])
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}




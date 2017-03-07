#include <iostream>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <queue>
#include <cstring>
#include <ctype.h>

#define ll long long int
#define pii pair<int,int>

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
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

int main()
{
    int a,b;
    cin>>a>>b;
    int ar1[a+1];
    int ar2[b+1];
    for(int i=0;i<a;i++)
        cin>>ar1[i];
    for(int i=0;i<b;i++)
        cin>>ar2[i];
    for(int i=0,j=0;i<b;i++)
    {
        if(ar2[i]>=ar1[j])
        {
            a--;
            if(a==0)
                break;
            j++;
        }
    }
    cout<<a<<endl;
    return 0;
}

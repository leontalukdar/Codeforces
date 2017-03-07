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
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    if(n==1 || n==2)
    {
        cout<<n<<endl;
        return 0;
    }
    int maxi=0;
    int segcount=2;
    for(int i=2;i<n;i++)
    {
        if(ar[i-2]+ar[i-1]==ar[i])
            segcount++;
        else
            segcount=2;
        if(maxi<segcount)
            maxi=segcount;
    }
    cout<<maxi<<endl;
    return 0;
}

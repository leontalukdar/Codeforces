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
    int mini=2000;
    for(int i=1;i<n-1;i++)
    {
        int maxi=0;
        for(int j=1;j<n;j++)
        {
            if(j==i)
            {
                if(maxi<ar[j+1]-ar[j-1])
                    maxi=ar[j+1]-ar[j-1];
                j++;
            }
            else
            {
                if(maxi<ar[j]-ar[j-1])
                        maxi=ar[j]-ar[j-1];
            }
        }
        if(mini>maxi)
            mini=maxi;
    }
    cout<<mini<<endl;
    return 0;
}






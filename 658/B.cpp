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
    int n,k,q;
    cin>>n>>k>>q;
    int relation[n+1];
    set<int>test;
    for(int i=0;i<n;i++)
    {
        cin>>relation[i];
    }
    int x,y;
    for(int i=0;i<q;i++)
    {
        cin>>x>>y;
        if(x==1)
        {
            test.insert(relation[y-1]);
            if(test.size()>k)
            {
                test.erase(test.begin());
            }
        }
        else
        {
            if(test.find(relation[y-1])!=test.end())
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}

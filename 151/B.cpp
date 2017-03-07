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
#define pb push_back

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
    vector<int>first;
    vector<int>second;
    int n;
    ll fsum=0,ssum=0;
    cin>>n;
    int x;
    while(n--)
    {
        cin>>x;
        if(x>0)
            first.pb(x);
        else
            second.pb(-x);
    }
    for(int i=0;i<first.size();i++)
    {
        fsum+=first[i];
    }
    for(int i=0;i<second.size();i++)
    {
        ssum+=second[i];
    }
    if(fsum>ssum)
    {
        cout<<"first"<<endl;
        return 0;
    }
    else if(ssum>fsum)
    {
        cout<<"second"<<endl;
        return 0;
    }

    else
    {
        for(int i=0;i<min(first.size(),second.size());i++)
        {
            if(first[i]>second[i])
            {
                cout<<"first"<<endl;
                return 0;
            }
            else if(second[i]>first[i])
            {
                cout<<"second"<<endl;
                return 0;
            }
        }
    }
    if(x>0)
        cout<<"first"<<endl;
    else
        cout<<"second"<<endl;
    return 0;
}

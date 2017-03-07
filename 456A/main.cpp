#include <iostream>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

#define ll long long int

using namespace std;

//Normal Gcd
int gcd ( int a, int b )
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}

//Recursive Gcd
int gcdr ( int a, int b )
{
  if ( a==0 ) return b;
  return gcdr ( b%a, a );
}

int main()
{
    vector<pair<int,int>> myvec;
    int n,x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        myvec.push_back(make_pair(x,y));
    }
    sort(myvec.begin(),myvec.end());
    for(int i=0;i<n-1;i++)
    {
        if(myvec[i].first<myvec[i+1].first&&myvec[i].second>myvec[i+1].second)
        {
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
    return 0;
}

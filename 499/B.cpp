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
    int day,hour;
    cin>>day>>hour;
    int mintime[day+1];
    int maxtime[day+1];
    int requiretime[day+1];
    for(int i=0;i<day;i++)
        cin>>mintime[i]>>maxtime[i];
    int summintime=0,summaxtime=0;
    for(int i=0;i<day;i++)
    {
        summintime+=mintime[i];
        summaxtime+=maxtime[i];
    }
    if(hour>=summintime && hour<=summaxtime)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<day;i++)
        {
            requiretime[i]=mintime[i];
            hour-=mintime[i];
        }
        int i=0;
        while(hour>0)
        {
            if(hour-(maxtime[i]-mintime[i])<0)
            {
                requiretime[i]+=hour;
                break;
            }
            else
            {
                requiretime[i]+=(maxtime[i]-mintime[i]);
                hour-=(maxtime[i]-mintime[i]);
                i++;
            }
        }
        for(int i=0;i<day;i++)
        {
            cout<<requiretime[i]<<" ";
        }
        cout<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}




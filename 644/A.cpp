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
    int n,ar[101][101],a,b,det=0,res=0;
    cin>>n>>a>>b;
    if(n>a*b)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0;i<a;i++)
    {
        if(det%2==0)
        {
            for(int j=0;j<b;j++)
            {
                res++;
                if(res<=n)
                    ar[i][j]=res;
                else
                    ar[i][j]=0;
            }
        }
        else
        {
            for(int j=b-1;j>=0;j--)
            {
                res++;
                if(res<=n)
                    ar[i][j]=res;
                else
                    ar[i][j]=0;
            }
        }
        det++;
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
            cout<<ar[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

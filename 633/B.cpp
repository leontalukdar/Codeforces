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

int findLastZeros(int  n)
{
    int countzero = 0;
    for (int i=5; n/i>=1; i *= 5)
          countzero += n/i;
    return countzero;
}

int main()
{
    int countnum=0,n;
    vector<int> myvec;
    cin>>n;
    for(int i=1;i<=1000000;i++)
    {
        int temp=findLastZeros(i);
        if(temp==n)
        {
            countnum++;
            myvec.push_back(i);
        }
    }
    cout<<countnum<<endl;
    for(int i=0;i<myvec.size();i++)
    {
        cout<<myvec[i]<<" ";
    }
    cout<<endl;
    return 0;
}

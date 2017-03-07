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

using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
#define pb push_back
#define mp make_pair
#define PI acos(-1.0)

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

//moduler arithmetic
/*ll bigmod(ll B,ll P,ll M)
{
    if(P==0)return 1;
    if(P%2==0)
    {
	ll ret=bigmod(B,P/2,M);
	return ((ret%M)*(ret%M))%M;
    }
    else
	return ((B%M)*(bigmod(B,P-1,M)%M))%M;
}*/

//int fx[]={0,0,1,-1};
//int fy[]={1,-1,0,0};
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

vector<int>v[100001];
vector<int>res[100001];
int ar[100001];
int mask[100001];
int ncount=0;
int comdif[100001];
int progress[100001];
int main()
{
    memset(mask,0,sizeof mask);
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        v[ar[i]].pb(i);
    }
    for(int i=0,j=0; i<n; i++)
    {
        if(!mask[ar[i]])
        {
            if(v[ar[i]].size()>1)
            {
                int flag=0;
                int temp=v[ar[i]][1]-v[ar[i]][0];
                for(int a=1; a<v[ar[i]].size(); a++)
                {
                    if(v[ar[i]][a]-v[ar[i]][a-1]==temp)
                        flag=1;
                    else
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag)
                {
                    comdif[ar[i]]=v[ar[i]][1]-v[ar[i]][0];
                    progress[j]=ar[i];
                    j++;
                    ncount++;
                }
            }
            else
            {
                comdif[ar[i]]=0;
                progress[j]=ar[i];
                j++;
                ncount++;
            }
        }
        mask[ar[i]]=1;
    }
    cout<<ncount<<endl;
    sort(progress,progress+ncount);
    for(int i=0; i<ncount; i++)
    {
        cout<<progress[i]<<" "<<comdif[progress[i]]<<endl;;
    }
    return 0;
}




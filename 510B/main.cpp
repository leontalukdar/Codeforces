#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<string,int> psi;
typedef pair<int,string> pis;
typedef pair<string,string> pss;
#define reset(n) memset(n,-1,sizeof(n))
#define clr(n) memset(n,0,sizeof(n))
#define pb push_back
#define mp make_pair
#define PI acos(-1.0)
#define MAX 100005


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
//ll M
/*ll bigmod(ll B,ll P)
{
    if(P==0)return 1;
    if(P%2==0)
    {
	ll ret=(bigmod(B,P/2))%M;
	return ((ret%M)*(ret%M))%M;
    }
    else
	return ((B%M)*(bigmod(B,P-1)%M))%M;
}*/
/*count trailing zeroes
ll findLastZeros(ll  n)
{
    ll countzero = 0;
    for (ll i=5; n/i>=1; i *= 5)
          countzero += n/i;
    return countzero;
}
*/

//int fx[]={0,0,1,-1};
//int fy[]={1,-1,0,0};
//int fx[]={1,1,-1,-1};
//int fy[]={1,-1,1,-1};
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

int main()
{
    char ar[51][51];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>ar[i][j];

    int flag=0;
    char ch;

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            ch=ar[i][j];
            for(int k=i+1;k<n;k++)
            {
                for(int l=j+1;l<m;l++)
                {
                    for(int a=i;a<=k && !flag;a++)
                    {
                        cout<<ar[a][j];
                        /*if(ar[a][j]!=ch)
                        {
                            flag=1;
                            break;
                        }*/
                    }
                    cout<<endl;
                    for(int a=j;a<=l && !flag;a++)
                    {
                        cout<<ar[i][a];
                        /*if(ar[i][a]!=ch)
                        {
                            flag=1;
                            break;
                        }*/
                    }
                    cout<<endl;
                    for(int a=j;a<=l && !flag;a++)
                    {
                        cout<<ar[k][a];
                        /*if(ar[k][a]!=ch)
                        {
                            flag=1;
                            break;
                        }*/
                    }
                    cout<<endl;
                    for(int a=i;a<=k && !flag;a++)
                    {
                        cout<<ar[a][l];
                        /*if(ar[a][l]!=ch)
                        {
                            flag=1;
                            break;
                        }*/
                    }
                    cout<<endl<<endl;
                    /*if(!flag)
                    {
                        cout<<"Yes"<<endl;
                        return 0;
                    }
                    else
                        flag=0;*/
                }
            }
        }
    }

    cout<<"No"<<endl;
    return 0;
}




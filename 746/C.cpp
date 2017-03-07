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
    double s,ipos,ides,tsec,isec,tpos;
    int tdir,idir;
    cin>>s>>ipos>>ides>>tsec>>isec>>tpos>>tdir;
    if(ipos==ides)
    {
        cout<<0<<endl;
        return 0;
    }
    if(ipos>ides)
        idir=-1;
    else
        idir=1;
    double tspeed=1.0/tsec;
    double ispeed=1.0/isec;
    if(ispeed>=tspeed)
    {
        cout<<abs(ipos-ides)/ispeed<<endl;
        return 0;
    }
    int flag=0;
    for(int i=1; i<=1000001; i++)
    {
        if(idir==-1)
        {
            if(tpos>=ipos)
                flag=1;
        }
        if(idir==1)
        {
            if(tpos<=ipos)
                flag=1;
        }
        if(idir==-1)
        {
            if(tpos<=ipos && tdir==idir && flag)
            {
                ispeed=tspeed;
            }
        }
        if(idir==1)
        {
            if(tpos>=ipos && tdir==idir && flag)
            {
                ispeed=tspeed;
            }
        }
        if(tdir==1)
        {
            tpos+=tspeed;
            if(tpos>s)
            {
                tpos-=2.0*(tpos-s);
                tdir=-1;
            }
        }
        else if(tdir==-1)
        {
            tpos-=tspeed;
            if(tpos<0)
            {
                tpos+=2.0*(0-tpos);
                tdir=1;
            }
        }
        if(idir==-1)
            ipos-=ispeed;
        if(idir==1)
            ipos+=ispeed;
        //cout<<ipos<<" "<<tpos<<endl;
        //cout<<ispeed<<" "<<tspeed<<endl;
        if(idir==-1 && ipos<=ides)
        {
            cout<<i<<endl;
            return 0;
        }
        if(ipos>=ides && idir==1)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}




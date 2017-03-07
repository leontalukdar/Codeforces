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

bool checkAvg(int x1,int x2,int x3,int x4)
{
    if((x1+x2+x3+x4)%4==0)
        return true;
    return false;
}

bool checkMedian(int x2,int x3)
{
    if((x2+x3)%2==0)
        return true;
    return false;
}

int avg(int x1,int x2,int x3,int x4)
{
    return (x1+x2+x3+x4)/4;
}

int median(int x2,int x3)
{
    return (x2+x3)/2;
}

int dif(int x1,int x4)
{
    return x4-x1;
}

int calX3(int x1,int x2,int x4)
{
    int temp=3*x4-5*x1-x2;
    return temp;
}

int getX4(int x1,int x2,int x3)
{
    return x1+median(x2,x3);
}

int getX3(int x1,int x2,int x4)
{
    return 2*(x4-x1)-x2;
}

int getX2(int x1,int x3,int x4)
{
    return 2*(x4-x1)-x3;
}

int getX1(int x2,int x3,int x4)
{
    return x4-median(x2,x3);
}

vector<int>given;
vector<int>ans;

int main()
{
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        given.pb(x);
    }
    sort(given.begin(),given.end());
    if(n==0)
    {
        cout<<"YES"<<endl;
        cout<<1<<endl;
        cout<<1<<endl;
        cout<<3<<endl;
        cout<<3<<endl;
    }
    if(n==1)
    {
        cout<<"YES"<<endl;
        cout<<given[0]<<endl;
        cout<<3*given[0]<<endl;
        cout<<3*given[0]<<endl;
    }
    if(n==2)
    {
        for(int i=1;i<=int(1e6);i++)
        {
            int x3=calX3(given[0],given[1],i);
            if(x3>i)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            if(checkMedian(given[1],x3)&&x3>=1)
            {
                if(median(given[1],x3)==dif(given[0],i))
                {
                    cout<<"YES"<<endl;
                    cout<<x3<<endl;
                    cout<<i<<endl;
                    return 0;
                }
            }
        }
        cout<<"NO"<<endl;
    }
    if(n==3)
    {
        int x4=getX4(given[0],given[1],given[2]);
        if(checkAvg(given[0],given[1],given[2],x4)&&checkMedian(given[1],given[2]))
        {
            if(avg(given[0],given[1],given[2],x4)==median(given[1],given[2])&&median(given[1],given[2])==dif(given[0],x4))
            {
                cout<<"YES"<<endl;
                cout<<x4<<endl;
                return 0;
            }
        }
        int x3=getX3(given[0],given[1],given[2]);
        if(checkAvg(given[0],given[1],x3,given[2])&&checkMedian(given[1],x3))
        {
            if(avg(given[0],given[1],x3,given[2])==median(given[1],x3)&&median(given[1],x3)==dif(given[0],given[2]))
            {
                cout<<"YES"<<endl;
                cout<<x3<<endl;
                return 0;
            }
        }
        int x2=getX2(given[0],given[1],given[2]);
        if(checkAvg(given[0],x2,given[1],given[2])&&checkMedian(x2,given[1]))
        {
            if(avg(given[0],x2,given[1],given[2])==median(x2,given[1])&&median(x2,given[1])==dif(given[0],given[2]))
            {
                cout<<"YES"<<endl;
                cout<<x2<<endl;
                return 0;
            }
        }
        int x1=getX1(given[0],given[1],given[2]);
        if(checkAvg(x1,given[0],given[1],given[2])&&checkMedian(given[0],given[1]))
        {
            if(avg(x1,given[0],given[1],given[2])==median(given[0],given[1])&&median(given[0],given[1])==dif(x1,given[2]))
            {
                cout<<"YES"<<endl;
                cout<<x1<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
    }
    if(n==4)
    {
        if(checkAvg(given[0],given[1],given[2],given[3])&&checkMedian(given[1],given[2]))
        {
            if(avg(given[0],given[1],given[2],given[3])==median(given[1],given[2])&&median(given[1],given[2])==dif(given[0],given[3]))
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
    }
    return 0;
}




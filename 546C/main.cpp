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

deque<int> player1;
deque<int> player2;
deque<int> tplayer1;
deque<int> tplayer2;

int dp[10000][10000];

bool compare()
{
    if(tplayer1.size()==player1.size()&&tplayer2.size()==player2.size())
    {
        for(int i=0; i<player1.size(); i++)
        {
            if(player1[i]!=tplayer1[i])
                return false;
        }
        for(int i=0; i<player2.size(); i++)
        {
            if(player2[i]!=tplayer2[i])
                return false;
        }

        return true;
    }
    return false;
}

int main()
{
    int n,k1,k2,z;
    cin>>n>>k1;
    for(int i=0; i<k1; i++)
    {
        cin>>z;
        player1.push_back(z);
        tplayer1.push_back(z);
    }
    cin>>k2;
    for(int i=0; i<k2; i++)
    {
        cin>>z;
        player2.push_back(z);
        tplayer2.push_back(z);
    }
    int war=0;
    while(!tplayer1.empty()&&!tplayer2.empty())
    {
        int x=tplayer1.front();
        tplayer1.pop_front();
        int y=tplayer2.front();
        tplayer2.pop_front();
        //cout<<x<<" "<<y<<endl;
        if(x>y)
        {
            tplayer1.push_back(y);
            tplayer1.push_back(x);
        }
        else
        {
            tplayer2.push_back(x);
            tplayer2.push_back(y);
        }
        if(compare()||war>2000)
        {
            cout<<-1<<endl;
            return 0;
        }
        war++;
    }
    cout<<war<<" ";
    if(!tplayer1.empty())
        cout<<1<<endl;
    else
        cout<<2<<endl;
    return 0;
}




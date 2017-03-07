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

map<char,int> m;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!='?')
            m[s[i]]++;
    }
    int maxi=max(m['A'],max(m['C'],max(m['G'],m['T'])));
    //cout<<maxi<<endl;
    if(n%4)
    {
        cout<<"==="<<endl;
        return 0;
    }

    if(maxi!=0)
    {
        if(n/maxi<4)
        {
            cout<<"==="<<endl;
            return 0;
        }
    }
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='?')
        {
            int mini=min(m['A'],min(m['C'],min(m['G'],m['T'])));
            if(mini==m['A'])
            {
                s[i]='A';
                m['A']++;
            }
            else if(mini==m['C'])
            {
                s[i]='C';
                m['C']++;
            }
            else if(mini==m['G'])
            {
                s[i]='G';
                m['G']++;
            }
            else if(mini==m['T'])
            {
                s[i]='T';
                m['T']++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}




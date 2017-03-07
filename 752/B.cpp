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

map<char,char> mymap;

set<pair<char,char> > words;
set<pair<char,char> >::iterator it;

int main()
{
    string s,t;
    cin>>s>>t;
    for(int i=0; i<s.length(); i++)
    {
        int flag=0;
        if(s[i]!=t[i])
        {
            if(!mymap[s[i]])
                mymap[s[i]]=t[i];
            if(!mymap[t[i]])
                mymap[t[i]]=s[i];
        }
    }
    for(int i=0;i<t.length();i++)
    {
        if(t[i]!=s[i])
        {
            t[i]=mymap[t[i]];
            char ch1=t[i];
            char ch2=mymap[t[i]];
            if(ch1>ch2)
                swap(ch1,ch2);
            words.insert(mp(ch1,ch2));
        }
    }
    if(s!=t)
        cout<<-1<<endl;
    else
    {
        cout<<words.size()<<endl;
        for(it=words.begin(); it!=words.end(); it++)
        {
            pair<char,char> temp=*it;
            cout<<temp.first<<" "<<temp.second<<endl;
        }
    }
    return 0;
}




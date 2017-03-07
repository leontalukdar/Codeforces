#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
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

int strToInt(string s)
{
    stringstream ss(s);
    int x;
    ss >> x;
    return x;
}

string intToStr(int a)
{
    stringstream ss;
    ss << a;
    string str = ss.str();
    return str;
}

//int fx[]={0,0,1,-1};
//int fy[]={1,-1,0,0};
//int fx[]={1,1,-1,-1};
//int fy[]={1,-1,1,-1};
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

bool visit[200005];
map<int,int>colortrac;
vector<int>graph[200005];
vector<pii>color;
queue<int>node;
map<int,int>trac;
map<int,int>parent;

int main()
{
    int n;
    cin>>n;
    int x,y;
    for(int i=0; i<n-1; i++)
    {
        cin>>x>>y;
        graph[x].pb(y);
        graph[y].pb(x);
    }
    node.push(1);
    color.pb(mp(1,1));
    trac[1]=1;
    visit[1]=true;
    parent[1]=0;
    int maxi=1;
    while(!node.empty())
    {
        int temp=node.front();
        node.pop();
        int holdcolor=trac[parent[temp]];
        //cout<<holdcolor<<endl;
        colortrac.clear();
        int x=1;
        for(int i=0; i<graph[temp].size(); i++)
        {
            if(!visit[graph[temp][i]])
            {

                node.push(graph[temp][i]);
                while(x==holdcolor||x==trac[temp]||colortrac[x])
                    x++;
                trac[graph[temp][i]]=x;
                color.pb(mp(graph[temp][i],x));
                parent[graph[temp][i]]=temp;
                visit[graph[temp][i]]=true;
                if(x>maxi)
                    maxi=x;
                colortrac[x]=1;
            }
        }
    }
    cout<<maxi<<endl;
    sort(color.begin(),color.end());
    for(int i=0; i<color.size(); i++)
        cout<<color[i].second<<" ";
    cout<<endl;
    return 0;
}




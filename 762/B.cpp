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
    vector<pair<ll,string> >mouses;
    ll a,b,c,m;
    while(cin>>a>>b>>c>>m)
    {
        mouses.clear();
        string s;
        ll usb=0,ps2=0,both=0,total=0,fusb=0,fps2=0,fboth=0,x;
        for(int i=0; i<m; i++)
        {
            cin>>x>>s;
            mouses.pb(mp(x,s));
        }
        sort(mouses.begin(),mouses.end());

        for(int i=0; i<mouses.size(); i++)
        {
            if(mouses[i].second=="USB"&&!fusb)
            {
                if(usb>=a)
                {
                    fusb=1;
                    if(!fboth)
                    {
                        if(both>=c)
                        {
                            fboth=1;
                        }
                        else
                        {
                            both++;
                            total+=mouses[i].first;
                            if(both>=c)
                                fboth=1;
                        }
                    }
                }
                else
                {
                    usb++;
                    total+=mouses[i].first;
                    if(usb>=a)
                        fusb=1;
                }
            }
            else if(mouses[i].second=="USB"&&!fboth)
            {
                if(both>=c)
                {
                    fboth=1;
                }
                else
                {
                    both++;
                    total+=mouses[i].first;
                    if(both>=c)
                        fboth=1;
                }
            }
            else if(mouses[i].second=="PS/2"&&!fps2)
            {
                if(ps2>=b)
                {
                    fps2=1;
                    if(both>=c)
                    {
                        fboth=1;
                    }
                    else
                    {
                        both++;
                        total+=mouses[i].first;
                        if(both>=c)
                            fboth=1;
                    }
                }
                else
                {
                    ps2++;
                    total+=mouses[i].first;
                    if(ps2>=b)
                        fps2=1;
                }
            }
            else if(mouses[i].second=="PS/2"&&!fboth)
            {
                if(both>=c)
                {
                    fboth=1;
                }
                else
                {
                    both++;
                    total+=mouses[i].first;
                    if(both>=c)
                        fboth=1;
                }
            }
        }
        cout<<usb+both+ps2<<" "<<total<<endl;
    }
    return 0;
}



